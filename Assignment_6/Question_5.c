//Write a program to calculate sum of cubes of first N natural numbers;
#include<stdio.h>
int main()
{ 
	int i,n,s=0;
	printf("How many natural numbers cubes's sum you wnant to print\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	   s=s+i*i*i;
	printf("Sum of %d natural numbers's cubes is %d",n,s);
	return 0;
}
