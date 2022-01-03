#include<stdio.h>
int main()
{
	int a=20;
	float x=3.555;
	char c='t';
	printf("%d",&x);
	printf("\n%11d",&a);
	printf("\n%11d",&c);
	int*p;
	printf("\n%d",sizeof(*p));
	p=&a;
}
