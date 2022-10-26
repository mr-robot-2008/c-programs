#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,i,j;
int pts1[]={210,75,210,85,200,85,200,95,210,95,210,105,200,105,200,140,190}
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
settextstyle(3,0,2);
outtextxy(130,10,"ELECTRIC BELL");
getch();
closegraph();
}
