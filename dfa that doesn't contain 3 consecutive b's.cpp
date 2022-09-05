#include <stdio.h>
#include <string.h>
int main()
{
	char input[20],state='0';
	int i;
	printf("Enter input:");
	gets(input);
	for(i=0;i<strlen(input);i++)
	{
	switch (state)
	{
		case '0':
			if(input[i]=='a')
			state='0';
			else if(input[i]=='b')
			state='1';
			break;
		case '1':
			if(input[i]=='a')
			state='0';
			else if(input[i]=='b')
			state='2';	
			break;
		case '2':
			if(input[i]=='a')
			state='0';
			else if(input[i]=='b')
			state='3';
			break;
		case '3':
			if(input[i]=='a'||input[i]=='b')
			state='3';
	}
	}
	if(state=='0'||state=='1'||state=='2')
		printf("Accepted");
	else
		printf("Not Accepted");
	return 0;	 	
}
