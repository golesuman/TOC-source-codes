#include<stdio.h>
#include<string.h>
char input[20];
int l;
int flag;
void q1(int i);
void q0(int i);
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
void q1(int i)	
{
		int k=i;
		if(input[i]=='b')
			{
				k++;
				flag=1;
				q0(k);	
			}
			else if(input[i]=='\0')
			{
				flag=0;
			}
		else
		{
			i++;
			flag=0;
			q1(i);
		}	
}

void q0(int i)
	{
		int k=i;
		if(input[i]=='b')
			{
				k++;
				flag=0;
				q1(k);	
			}
			else if(input[i]=='\0')
			{
				flag=1;
			}
		else
		{
			i++;
			flag=1;
			q0(i);
		}	
	}
