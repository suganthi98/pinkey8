#include<stdio.h>
int main()
{

int check,rem,sum=0,amstr;
printf("enter the  number\n");
scanf("%d",&amstr);
check=amstr;
while(check!=0)
{
rem=check%10;
sum+=(rem*rem*rem);
check/=10;
}
if(sum==amstr)
printf("%d is amstrong number",amstr);
else
printf("%d is not amstrong number",amstr);
return 0;
}
