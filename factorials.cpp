#include<stdio.h>
int main()
{
	int i=1,c=1,x;
	printf("enter the x:");
	scanf("%d",&x);
	while(i<=x)
	{
		c=c*i;
		i++;
	}
	printf("factorial of x:%d",c);
}
