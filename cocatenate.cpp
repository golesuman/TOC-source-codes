// #include <stdio.h>
#include<iostream>
using namespace std;
// #include <conio.h>
// #include<string.h>
int main()
{
	int a=0,b=0;
	char str1[100],str2[100],str3[100];
	printf("Enter string 1: ");
	cin>>str1;
	printf("Enter string 2: ");
	cin>>str2;
	while(str1[b]!='\0')
	{
		str3[a]=str1[b];
		a++;
		b++;
	}
	b=0;
	while(str2[b]!='\0')
	{
		str3[a]=str2[b];
		a++;
		b++;
	}
	str3[a]='\0';
	printf("The concatenated string is: %s",str3);
	printf("\n");
	return 0;
}
