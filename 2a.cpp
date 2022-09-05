#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int q0=0,q1=1,q2=2,q3=3,q4=4,q5=5,i;
	int state=q0;
	char in[100];
	printf("Enter binary string:");
	gets(in);
	for(i=0;i<strlen(in);i++)
	{
		if(state==q0)
		{
			if(in[i]=='a')
			state=q1;
			else
			state=q3;
		}
		else if(state==q1)
		{
			if(in[i]=='a')
			state=q1;
			if(in[i]=='b')
			state=q2;
		}
		else if(state==q3)
		{
			if(in[i]=='b')
			state=q3;
			if(in[i]=='a')
			state=q4;
		}
			else if(state==q4)
		{
			if(in[i]=='b')
			state=q5;
			if(in[i]=='a')
			state=q4;
		}
	}
	if(state==q2||state==q5)
	printf("Accepted");
	else
	printf("Rejected");
}

