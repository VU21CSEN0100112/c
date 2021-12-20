#include<stdio.h>   
int main()
{
	int i=1,c=1,x;
	printf("enter the x:");
	scanf("%d",&x);
	while(i<=20)
	{
		c=i*x;
		printf("%d*%d=%d\n",x,i,c);
		i++;
	}
	
}
