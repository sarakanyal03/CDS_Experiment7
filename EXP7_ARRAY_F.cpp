//SARA KANYAL
//23070123115
//EXP 7E
//Using sum and average of array (using for loop)
#include<iostream>
using namespace std;

int main() {
    int arr1[5], i, j;
    float sum=0, avg;
    for(i=0;i<5;i++) {
        cout<<"Enter element-"<<i+1<<": ";
        cin>>arr1[i];
    }
    for(j=0;j<5;j++) {
        sum = sum + arr1[j];
    }
    cout<<"Sum of elements = "<<sum<<endl;
    avg = sum/5;
    cout<<"Average = "<<avg;
}
