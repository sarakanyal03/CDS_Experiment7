//SARA KANYAL
//23070123115
//EXP 7C
//Reversing array 
#include<iostream>
using namespace std;

int main() {
    int n, i, j=0, k, l, temp;
    cout<<"Enter size of an array: ";
    cin>>n;
    int arr1[n], arr2[n];
     //create array
    for(i=0;i<5;i++) {
        cout<<"Enter element-"<<i+1<<": ";
        cin>>arr1[i];
    }
    //display input array
    cout<<"\nArray given by user: ";
    for(l=0;l<5;l++) {
        cout<<arr1[l];
    }
    cout<<endl;
    //reverse array
    for(k=4;k>=0;k--) {
        temp = arr1[k];
        arr2[j] = temp;
        j++;
    }
    //display reversed array
    cout<<"Reversed array: ";
    for(l=0;l<5;l++) {
        cout<<arr2[l];
    }
}
