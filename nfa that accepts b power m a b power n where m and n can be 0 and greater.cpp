#include<stdio.h>
#include<string.h>
char input[20];
int l;
int flag;
	void q1(int i)
	{
		int k=i;
		if(input[i]=='b'||input[i]=='\0')
			{
				k++;
				flag=1;
				q1(k);
			}
		else if(input[i]=='a')
		{
			flag=0;
		}	
	}
	void q0(int i)
	{
		if(i<l)
		{
			int k=i;
			if(input[i]=='b')
			{
				k++;
				q0(k);
			}
			else if(input[i]=='a')
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

