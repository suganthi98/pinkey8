#include<stdio.h>
#include<conio.h>
int main()
{
int low,high,i,temp1,temp2,re,n=0,result=0;
printf("enter the two number");
scanf("%d%d",&low,&high);
printf("armstr number between %d an %d are\n ",low,high);
for(i=low+1;i<high;++i)
{
temp2=i;
temp1=i;
while(temp1!=0)
{
temp1/=10;
++n;
}
while(temp2!=0)
{
re=temp2%10;
result+=pow(re,n);
temp2/=10;
}
if(result==i)
{
printf("%d",i);
}
n=0;
result=0;
}
return 0;
}
