#include<stdio.h>
#include<string.h>
char input[20];
int l;
int flag;
	void q1(int i)
	{
		if(input[i]=='\0')
 	 {
		flag=1;
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
			}
			else if(input[i]=='b')
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

