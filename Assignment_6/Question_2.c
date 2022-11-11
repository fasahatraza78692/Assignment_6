//Write a program to calculate sum of first N even natural numbers;
#include<stdio.h>
int main()
{
	int i,n,s=0;
	printf("How many even natural numbers you want to add\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	    s=s+i*2;
    printf("Sum of %d natural numbers is %d",n,s);
	return 0;
}
