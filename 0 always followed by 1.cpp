#include <stdio.h>
#include <string.h>
int main()
{
	char input[20],state='a';
	int i;
	printf("Enter input:");
	gets(input);
	for(i=0;i<strlen(input);i++)
	{
	switch (state)
	{
		case 'a':
			if(input[i]=='0')
			state='b';
			else if(input[i]=='1')
			state='c';
			break;
		case 'b':
			if(input[i]=='0')
			state='d';
			else if(input[i]=='1')
			state='c';	
			break;
		case 'c':
			if(input[i]=='0')
			state='b';
			else if(input[i]=='1')
			state='c';
			break;
		case 'd':
			if(input[i]=='0')
			state='d';
			else if(input[i]=='1')
			state='d';
	}
	}
	if(state=='c')
		printf("Accepted");
	else
		printf("Not Accepted");
	return 0;	
		
}
