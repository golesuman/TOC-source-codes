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
			state='1';
			else if(input[i]=='b')
			state='0';	
	}
	}
	if(state=='0')
		printf("Accepted");
	else
		printf("Not Accepted");
	return 0;	 	
}
