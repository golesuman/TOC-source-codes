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
			if(input[i]=='0'||input[i]=='1')
			state='b';
			break;
		case 'b':
			if(input[i]=='0'||input[i]=='1')
			state='a';
	}
	}
	if(state=='a')
		printf("Accepted");
	else
		printf("Not Accepted");
}
