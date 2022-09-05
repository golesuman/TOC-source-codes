#include<iostream>
using namespace std;
int main()
{
    char str[10];
    char state;
    char A, B, C;
    cout<<"Enter the string"<<endl;
    cin>>str;
    int i = 0;
    state = A;
    switch(state)
    {
        case 'A':
            if(str[i] == '0' || str[i] == '1')
            state = A;
            else if(str[i] == '0')
            state = B;
            i++;
            break;
        case 'B':
            if (str[i] == '1')
            state = 'C';

        
            
    }
    
    }