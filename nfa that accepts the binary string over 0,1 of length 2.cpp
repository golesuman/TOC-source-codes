#include<stdio.h>
#include<string.h>
char input[20];
int l;
int flag;
void q2(int i)
{
	if(input[i]=='\0')
	{
		flag=1;
	}
}
	void q1(int i)
	{
		if(i<l)
		{
			if(input[i]=='0'||input[i]=='1')
			{
				i++;
				q2(i);
			}
		}
	}
	void q0(int i)
	{
		if(i<l)
		{
			if(input[i]=='0'||input[i]=='1')
			{
				i++;
				q1(i);
			}
	}
}
	int main()
	{
		printf("\nEnter a string:");
		gets(input);
		l=strlen(input);
		int i=0;
		flag=0;
		q0(i);
		if(flag==1)
		{
			printf("Accepted");
		}
		else
		{
			printf("Rejected");
		}
		return 0;
	}

