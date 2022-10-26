#include<stdio>
#include<string.h>


int isAnagram(char * a, char * b)
{
    int freqA[26]={0}, freqB[26]={0};

    for(int i=0; i<strlen(a); i++)
    {
        freqA[a[i]-'a']++;
    }

    for(int i=0; i<strlen(b); i++)
    {
        freqB[b[i]-'a']++;
    }

    for(int i=0; i<26; i++)
    {
        if(freqA[i]!=freqB[i])
         return false;
    }

    return true;
}


int main()
{
    char a[100], b[100];
    scanf("%s", a);
    scanf("%s", b);

    if(isAnagram(a,b)==1)
        printf("true");
    else
        printf("false");
    return 0;
}

