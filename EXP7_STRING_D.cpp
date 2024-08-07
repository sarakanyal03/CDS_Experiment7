//SARA KANYAL
//23070123115
// EXPERIMENT 7D_STRING
// checking palindrome
#include<iostream> 
#include<string> 
using namespace std; 
 
int main() { 
    string x; 
    cout<<"Enter a string: "; 
    cin>>x; 
    int n=x.length(), i, flag=0; 
 
    for(i=0;i<x.length();i++){ 
        if(x[i]==x[n-1]){ 
            flag=1; 
        } 
        n--; 
    } 
    if(flag==1){ 
        cout<<x<<" is palindrome"; 
    } 
    else{ 
        cout<<x<<" is not palindrome"; 
    } 
} 