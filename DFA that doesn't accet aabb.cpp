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
			state='1';
			else if(input[i]=='b')
			state='0';
			break;
		case '1':
			if(input[i]=='a')
			state='2';
			else if(input[i]=='b')
			state='0';	
			break;
		case '2':
			if(input[i]=='a')
			state='2';
			else if(input[i]=='b')
			state='3';
			break;
		case '3':
			if(input[i]=='a')
			state='1';
			else if(input[i]=='b')
			state='4';
			break;
		case '4':
			if(input[i]=='a'||input[i]=='b')
			state='4';					
	}
	}
	if(state=='0'||state=='1'||state=='2'||state=='3')
		printf("Accepted");
	else
		printf("Not Accepted");
	return 0;	 	
}
