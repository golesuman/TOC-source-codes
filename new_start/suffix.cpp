#include<iostream>
using namespace std;
int main()
{
    int i, j;
    char str[100];
    cout<<"Enter the string"<<endl;
    cin>>str;
    cout<<"The outpur is:"<<endl;
    for(i=0; str[i]!='\0'; i++)
    {
        for(j=0; str[j]!='\0'; j++)
        {
            if(j>=i)
            cout<<str[j];
        }
        cout<<endl;

    }
}