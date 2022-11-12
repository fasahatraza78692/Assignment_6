#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter a number\n");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	  	if(n%i==0) 
			break;
	  if(i==n/2+1)
	     printf("%d is a prime number",n);
	  else
	     printf("%d is not a prime number",n);
	return 0;
}
