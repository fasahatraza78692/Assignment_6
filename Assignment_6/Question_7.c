//Write a program to count digits in a given number;
#include<stdio.h>
int main()
{
    int x,i,count=0;
	printf("Enter a number to count it's digit\n");
	scanf("%d",&x);
	while(x!=0)
	  {  
	  	
	  	x=x/10;
	  	count++;
	  }
	printf("%d digits is there in this number",count);
	return 0;
}
