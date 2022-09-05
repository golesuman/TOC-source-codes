#include<stdio.h>
#include<string.h>
char input[20];
int l;
int flag;
void q4(int i)
{
		flag=1;
}
void q3(int i)
	{
		if(i<l)
		{
			if(input[i]=='b')
			{
				i++;
				q4(i);
			}
		}
	}
void q2(int i)
	{
		if(i<l)
		{
			if(input[i]=='b')
			{
				i++;
				q3(i);
			}
		}
	}
	void q1(int i)
	{
		if(i<l)
		{
			if(input[i]=='a')
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
			int k=i;
			if(input[i]=='a')
			{
				k++;
				q0(k);
				q1(k);
			}
			else if(input[i]=='b')
			{
				i++;
				q0(i);
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
			printf("Rejected");
		}
		else
		{
			printf("Accepted");
		}
		return 0;
	}

