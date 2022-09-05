#include <iostream>
#include <string>
using namespace std;
int main()
{
    char a[10] = "hari";
    char b[10] = "krishna";
    char c[20];
    // int n;
    int i = 0, j = 0;
   
    while (a[i] != '\0')
    {
        c[i] = a[j];
        i++;
        j++;
    }
    j = 0;
    while (b[j] != '\0')
    {
        c[i] = b[j];
        j++;
        i++;
    }
   
    c[i] = '\0';
    cout<<c<<endl;
   
}

