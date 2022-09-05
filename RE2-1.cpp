//C Program for implementing DFA of Regular Expression
//(a+aa*b)*
#include<stdio.h>
#include<string.h>
int main()
{
    char input[100];
    int status_a=0,status_b=0;
    printf("Enter the string \n");
    scanf("%s",input);
    int len=strlen(input),i;
    for(i=0;i<len;i++)
    {
        if(input[i]!='a' && input[i]!='b')
        {
            printf("You Entered wrong input\n");
            break;
        } //abb
        else
        {
            if(input[i]=='a')
            {
                status_a=1;
                status_b=0;
            }
            else
            {
                if(status_b==1 || status_a==0)
                {
                    printf("String is not accepted \n");
                    break;
                }
                else
                {
                    status_b=1;
                    status_a=0;
                }
            }

        }
        if(i==len-1)
        {
          printf("String is Accepted \n");
        }
    }
    return 0;
}
