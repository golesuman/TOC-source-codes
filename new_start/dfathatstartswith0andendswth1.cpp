#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    char state;
    char q0, q1, q2, q3;
    state = q0;
    cout<<"Enter the string"<<endl;
    cin>>str;
    int i;
    for(i = 0;i<str.size(); i++)
    {
        if (state == q0)
        {
            if(str[i] == '0')
            {
                state = q1;
            }
            else
            state = q3;
        }
        else if(state == q1)
        {
            if(str[i] == '0')
            state = q1;
            else
            state = q2;

        }
        else if (state == q2)
        {
            if(str[i] == '0')
            state = q1;
            else
            state = q2;
       
    }

    }
    if(state == q2)
    {
        cout<<"Accepted"<<endl;
    }
    else{
        cout<<"rejected"<<endl;
    }

}