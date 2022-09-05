#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void get_prefix(char[]);
void get_suffix(char[]);
void get_substring(char[],int,int);
int main()
{
	char string[20];
	int x,y,choice;
	printf("Enter String:");
	gets(string);

	printf("1.Prefix \n2.Suffix \n3.Substring \n\nEnter any number to exit-----");
	printf("\n\nEnter your choice:");
	scanf("%d",&choice);
	if(choice==1)
	{
	get_prefix(string);
}
else if(choice==2)
{
get_suffix(string);
}
else if(choice==3)
{
	while(1)
	{
	printf("\n\nEnter range:");
	scanf("%d %d",&x,&y);
	if(x<0||y>strlen(string))
	{
		printf("\n\nRange is not suitable");
		printf("\n\nPlease Enter again......");
	}
	else
	{
		get_substring(string,x,y);
		exit(0);
	}
}
}
else
{
printf("Program Exit");
exit(0);
}
	return 0;
}
void get_prefix(char a[20]){
	int i,j,k;
	char c[20];
	for(i=strlen(a);i>0;i--){
		k=0;
		for(j=0;j<i;j++){
			c[j]=a[k];
			k++;
		}
		c[j]='\0';
		printf("\n %s \n",c);
	}
}
void get_suffix(char a[20]){
	int i,j,k;
	char c[20];
	for(i=0;i<strlen(a);i++){
		k=strlen(a);
		for(j=strlen(a);j>=i;j--){
			c[j]=a[k];
			k--;
		}
		c[j]=' ';
		printf("\n %s \n",c);
	}
}
void get_substring(char a[20],int x,int y)
{
	int m,n,i,t;
	char sub[20];
	m=x-1;
	n=y-1;
	t=0;
	for(i=m;i<=n;i++)
	{
		sub[t]=a[i];
		t++;
	}
	printf("The substring is: %s",sub);
}
