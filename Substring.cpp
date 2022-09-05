#include <stdio.h>
#include <conio.h>
int main()
{
	int m,n,i,t,x,y;
	char c[100],sub[100];
	printf("Enter a string:");
	gets(c);
	printf("Enter the first position and last position:");
	scanf("%d %d",&x,&y);
	m=x-1;
	n=y-1;
	t=0;
	for(i=m;i<=n;i++)
	{
		sub[t]=c[i];
		t++;
	}
	printf("The substring is: %s",sub);
	return 0;
}
