#include<stdio.h>
int main()
{
	int x,ones,tens;
	printf("Enter a four digit number:");
	scanf("%d",&x);
	tens=x/100;
	ones=x%100;
	if(tens==ones)
	printf("Success");
	else
	printf("Failure");
} 
