//#include<bits/stdc++.h> 
#include<iostream>
using namespace std; 

string GetPrefixSuffix(string a, string b, int l) 
{ 
    string prefix = a.substr(0, l); 
    int lb = b.length(); 
    string suffix = b.substr(lb - l); 
    return (prefix + suffix); 
} 

int main() 
{ 
    string a = "apple" ,  
           b = "cider"; 
    int l = 3; 
    cout << GetPrefixSuffix(a, b, l);  
    return 0; 
} 
