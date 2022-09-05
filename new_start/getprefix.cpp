#include<iostream>
using namespace std;
int main()
{
    char str[10];
    int i = 0, j = 0;
    cout<<"Enter the string:\n";
    cin>>str;
    cout<<"Output"<<endl;
    for(i = 0; str[i] !='\0';i++)
    {
        for (j = 0; j < str[j] != '\0'; j++)
        {
            // if()
            if(j<=i)
                cout<<str[j];
            
        }
        cout<<endl;

    }


}