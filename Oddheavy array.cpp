#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,a[30],i,o[30],e[30],j,no,ne,c;
	printf("Odd Heavy Array:\n\n\n");
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("\n\n");
	printf("The entered numbers are:");
	for(i=0;i<n;i++)
	{
		printf("%d  \t",a[i]);
	}
	j=0;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
		e[j]=a[i];
		j=j+1;
	}
	}
	ne=j;
	j=0;
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
		o[j]=a[i];
		j=j+1;
	}
	}
	no=j;
	printf("\n\n");
	printf("Even numbers: ");
	for(i=0;i<ne;i++)
	{
		printf("%d   ",e[i]);
	}
	printf("\n");
		printf("Odd numbers: ");
	for(i=0;i<no;i++)
	{
		printf("%d   ",o[i]);
	}
	if(no==0)
	{
		printf("\n\n\nNot Odd Heavy Array");
		exit(0);
	}
	if(ne==0)
	{
		printf("\n\n\nOdd Heavy Array");
		exit(0);
	}
	for(i=0;i<no;i++)
	{
		for(j=0;j<ne;j++)
		{		
		if(o[i]>e[j])
		{
		c=1;
	}
	else
	{
	printf("\n\n\nNot Odd Heavy Array");
	exit(0);
	}
}
	}
	if(c==1)
	{
	printf("\n\n\nOdd Heavy Array");	
	}
	return 0;
}
