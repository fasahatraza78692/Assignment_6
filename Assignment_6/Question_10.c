#include<stdio.h>
int main()
{
	int a,y,x=0;
	printf("Enter a number");
	scanf("%d",&a);
	while(a!=0)
	{
		y=a%10;
	    x=x*10+y;
	    a/=10;
	}
	printf("Reversed = %d",x);
	
	return 0;
}
