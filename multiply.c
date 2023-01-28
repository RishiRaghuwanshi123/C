

#include<stdio.h>
int main()
{
 int R,C,m ;
 printf("enter your rows:") ;
 scanf("%d",&R) ;
 printf("enter your columns:");
 scanf("%d",&C);
 int arr[R][C];
 int* ptr=&arr[0][0];
 printf("enter matrix one elements :") ;
 for( int i = 0 ; i < R ; i++)
{for( int j = 0 ; j < C ; j++)
{
  scanf(" %d",(ptr+(i*C)+j)) ;
}
}
for( int i = 0 ; i < R ; i++)
{for( int j =0 ; j < C ; j++)
{
printf("%d ",*(ptr+(i*C)+j)) ;
}
printf("\n");
}
int B,A ;
printf("enter your rows") ;
scanf("%d",&A);
printf("enter your columns");
scanf("%d",&B);
int arra[A][B] ;
int *poi=&arra[0][0];
printf("enter matrix two elements :") ;
for(int i = 0 ; i < C ; i++)
{for(int j = 0 ; j < B ; j++)
{ 
scanf("%d",poi+i*B+j) ;
}
}
for(int i = 0 ; i < C ; i++ ) 
{ for( int j = 0 ; j < B ; j++ ) 
{
printf("%d ",*(poi+i*B+j));
}
printf("\n");
}
if(A==C)
{
int res[R][B];
int *p=&res[0][0];
int k;
for( int i = 0 ; i < R ; i++ ) 
{ for( int j = 0 ; j < B ; j++ )
{  m=0;
for(int k = 0 ; k < C ; k++ )
{
    m=m+*(ptr+i*C+k)*(*(poi+k*B+j));
    *(p+i*B+j)=m;
}
}
}
printf("product of your matrics:\n");
for( int i = 0 ; i < R ; i++ )
{ for( int j = 0; j < B ; j++ )
{
printf("%d ",*(p+i*B+j)); }
printf("\n");
}
return 0;
}
else
{
    printf("Invalid Order of Matrix");
}
}