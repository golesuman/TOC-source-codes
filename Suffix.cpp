//#include<bits/stdc++.h> 
#include<iostream>
using namespace std; 
void GetSuffix(string a) 
{	int j;
	for(j=a.length()-1;j>=0;j--){
			cout << a.substr(j)<<endl;
		}
} 
int main() 
{   string a = "computer" ; 
    GetSuffix(a); 
    return 0; 
} 
