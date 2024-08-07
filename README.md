# Experiment7
AIM : <BR>
To study and implement C++ Arrays and Strings. <BR>
THEORY :<BR>
Array: In C++ programming language arrays are used to store a collection of elements of the same type in contiguous memory locations. The first element is located at the lowest memory address, while the last element is located at the highest memory address. <br>
1. Defining Arrays : Arrays in C++ can be defined in two main ways i.e. static and dynamic. The array_size must be an integer constant greater than zero and type can be any valid C++ data type.  <br>
Static Arrays: These arrays have a fixed size determined at compile time.   <br>
```
int myArray[5]; // Declares an array of 5 integers
```
Dynamic Arrays: These arrays allow for size determination at runtime using pointers and dynamic memory allocation. <br>
```
int* myArray = new int[5]; // Allocates an array of 5 integers on the heap
```
 <br>
2. Initializing array: Arrays can be initialized at the time of declaration as follows: <br>
Static Arrays: <br>

```
int myArray[5] = {1, 2, 3, 4, 5}; // Initializes all elements
int myArray[5] = {1, 2}; // Initializes the first two elements, the rest are set to 0  
```
Dynamic Arrays:
```
int* myArray = new int[5];
for (int i = 0; i < 5; ++i) {
    myArray[i] = i + 1; // Assign values to each element
}
```

3. 	Accessing and Modifying Elements : <br> 
An element is accessed by indexing the array name. Elements in an array are accessed and modified using the subscript operator [ ]. For example −
```
int myArray[5] = {1, 2, 3, 4, 5};
int x = myArray[2]; // Accesses the third element (index 2)
myArray[2] = 10; // Modifies the third element
```
CODE AND OUTPUT : <BR>
1. CODE A:  <BR>
```
//Printing array 
#include <iostream>
using namespace std;

int main() {
    int array1[5] = {10, 20, 30, 40, 50};
    int array2[] = {60, 70, 80, 90, 100};

    cout << "\nModern method: \n";

    for (int i = 0; i < 5; i++) {
        cout << "array1[" << i << "] = " << array1[i] << "\n";
    }

    for (int i = 0; i < 5; i++) {
        cout << "array2[" << i << "] = " << array2[i] << "\n";
    }

    return 0;
}
```
OUTPUT A: <BR>
![EXP_ARRAY_A](https://github.com/sarakanyal03/CDS_Experiment7/blob/main/array_a.png)

2. CODE B: <BR>
```

#include <iostream>
#define SIZE 5
using namespace std;

int main() {
    int array1[SIZE];

    //take input from user
    cout << "Enter " << SIZE << " elements of array: ";
    for (int index = 0; index < SIZE; index++) {
        cin >> array1[index];
    }
  cout << endl;

    // display entered array ekements
    for (int j : array1) {
        cout << j << "  ";
    }

   return 0;
}

```
OUTPUT B : <BR>
![EXP_ARRAY_B](https://github.com/sarakanyal03/CDS_Experiment7/blob/main/array_b.png)

3. CODE C: <BR>
```
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
```
OUTPUT C: <BR>
![EXP_ARRAY_C](https://github.com/sarakanyal03/CDS_Experiment7/blob/main/array_c.png)
4. CODE D: <BR>
```
#include<iostream>
using namespace std;
int main() {
    int marks[5], i, j, num, flag=0, count=0;
    for(i=0;i<5;i++) {
        cout<<"Enter element-"<<i+1<<": ";
        cin>>marks[i];
    }
    cout<<"Enter element to be searched: ";
    cin>>num;
    for(j=0;j<5;j++) {
        if(marks[j]==num) {
            cout<<"Position of "<<num<<": "<<j+1<<endl;
            count++;
            flag=1;
        }
    }
    if(flag==0) {
        cout<<"Element not present";
    }
    else if(flag==1) {
        cout<<"Element is present: "<<count<<" times";
    }
}
```
OUTPUT D: <BR>
![EXP_ARRAY_D](https://github.com/sarakanyal03/CDS_Experiment7/blob/main/array_d.png)
5. CODE E: <BR>
```
#include <iostream>
using namespace std;

int main() {
    
  // declare and initialize an array 
  double numbers[] = {1.2, 2.3, 3.4, 4.5, 5.6, 6.7};

  double sum = 0.0;
  double count = 0.0;
  double average;

  cout << "The numbers are: ";

  //  print array elements use of range-based for loop
  for (const double n : numbers) {
    cout << n << "  ";
    //  calculate the sum
    sum += n;
    // count the no. of array elements
    ++count;
  }
  // print the sum
  cout << "Sum = " << sum << endl;

  // find the average
  average = sum / count;
  cout << "Their Average = " << average << endl;
  return 0;
}
```
OUTPUT E: <BR>
![EXP_ARRAY_E](https://github.com/sarakanyal03/CDS_Experiment7/blob/main/array_e.png)
6. CODE F: <BR>
```
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
```
OUTPUT F: <BR>
![EXP_ARRAY_F](https://github.com/sarakanyal03/CDS_Experiment7/blob/main/array_f.png)

7. CODE G: <BR>
```
#include<iostream>
using namespace std;
int main() {
    int n, i, max=0;
    cout<<"Enter number of elements: ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cout<<"Enter element-"<<i<<": ";
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    int min=a[0];
    for(i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    cout<<"Maximum: "<<max<<endl<<"Minimum: "<<min;
}

```
OUTPUT G: <BR>
![EXP_ARRAY_G](https://github.com/sarakanyal03/CDS_Experiment7/blob/main/array_g.png)


