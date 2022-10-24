#include<semaphore.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
sem_t x,y;
pthread_t tid;
pthread_t writerthreads[100],readerthreads[100];
int readercount = 0;
//Writer condition, with Race condition avoidence as well.
void *writer(void *param)
{
    printf("Writer is trying to enter\n");
    sem_wait(&y);
    sleep(2);
    printf("Writer has entered, no Other writing allowed, to Avoid Race Condition.\n");
    sem_post(&y);
    sleep(2);
    printf("Writer is leaving.\n");
    return NULL;
}
//Reader conditon
void *reader(void *param)
{
    sem_wait(&x);
    readercount++;
    if(readercount==1)
        sem_wait(&y);
    sem_post(&x);
    printf("%d reader is inside\n",readercount);
    sleep(3);
    sem_wait(&x);
    readercount--;
    if(readercount==0)
    {
        sem_post(&y);
    }
    sem_post(&x);
    printf("%d Reader is leaving.\n",readercount+1);
    sleep(3);
    return NULL;
}


int main()
{
    int rdrs,i;
    printf("Enter the total number of readers:");
    scanf("%d",&rdrs);
    printf("\n");
    int n1[rdrs];
    sem_init(&x,0,1);
    sem_init(&y,0,1);
    for(i=0;i<rdrs;i++)
    {
        pthread_create(&writerthreads[i],NULL,reader,NULL);
        pthread_create(&readerthreads[i],NULL,writer,NULL);
    }
    for(i=0;i<rdrs;i++)
    {
        pthread_join(writerthreads[i],NULL);
        pthread_join(readerthreads[i],NULL);
    }

}
