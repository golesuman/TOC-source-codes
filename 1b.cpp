#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int q0=0,q1=1,i;
	int state=q0;
	char in[100];
	printf("Enter binary string:");
	gets(in);
	for(i=0;i<strlen(in);i++)
	{
		if(state==q0)
		{
			if(in[i]=='1'||in[i]=='0')
			state=q1;
		}
		else if(state==q1)
		{
			if(in[i]=='1'||in[i]=='0')
			state=q0;
		}
	}
	if(state==q0)
	printf("Accepted");
	else
	printf("Rejected");
}

