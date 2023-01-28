#include<stdio.h>
int main()
{
    int mark[4];
    printf("enter physics number:");
    scanf("%d",&mark[0]);
    printf("Enter maths number:");
    scanf("%d",&mark[1]);
    printf("enter english marks:");
    scanf("%d",&mark[2]);
    printf("enter science marks:");
    scanf("%d",&mark[3]);

    printf("physics:%d,maths:%d,english:%d,science:%d",mark[0],mark[1],mark[2],mark[3]);
    return 0;


}