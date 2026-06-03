#include<stdio.h>
int main()
{
	int x,ones,tens;
	printf("Enter a two digit number:");
	scanf("%d",&x);
	ones=x%10;
	tens=x/10;
	if(tens >= ones)
	printf("Success");
	else
	printf("Failure");
} 
