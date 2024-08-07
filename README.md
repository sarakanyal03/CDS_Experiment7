# Experiment7
AIM : <BR>
To study and implement C++ Arrays and Strings. <BR>
THEORY :<BR>
1) ARRAY : In C++ programming language arrays are used to store a collection of elements of the same type in contiguous memory locations. The first element is located at the lowest memory address, while the last element is located at the highest memory address. <br>

i) Defining Arrays : Arrays in C++ can be defined in two main ways i.e. static and dynamic. The array_size must be an integer constant greater than zero and type can be any valid C++ data type.  <br>
Static Arrays: These arrays have a fixed size determined at compile time.   <br>
```
int myArray[5]; // Declares an array of 5 integers
```
Dynamic Arrays: These arrays allow for size determination at runtime using pointers and dynamic memory allocation. <br>
```
int* myArray = new int[5]; // Allocates an array of 5 integers on the heap
```
 <br>
ii) Initializing array: Arrays can be initialized at the time of declaration as follows: <br>
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

 iii) Accessing and Modifying Elements : <br> 
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
<br>

 2) STRINGS : In C++ programming language, strings are sequences of characters used to represent text. The string class stores the characters as a sequence of bytes with the functionality of allowing access to the single-byte character. There are two primary ways to handle strings in C++: (i) C-style strings (character arrays)    (ii)std::string   from the Standard Library. <BR>
 Some differnces between strings and array in C++: <br>
Strings are one- dimensional array of characters terminated by a null character while array are data structures containing a collection of elements each identified by array index . <br>
Strings can an only store characters and has a fixed size while arrays can store a set of integers, doubles, floats ets and has a fixed size but can be changed using char pointer . <br>
## Comparison Table

| Feature           | Array                                           | String                                       |
|-------------------|-------------------------------------------------|----------------------------------------------|
| Definition    |A group of elements of the same type stored in adjacent memory locations. | A sequence of characters, typically represented as an array of characters with added functionalities. |
| Memory Management | Explicit memory management in languages like C/C++ |Automated memory management in high-level languages. |
| Size          |Arrays have a fixed size determined at the time of their creation. The size is defined by the number of elements the array can hold and is usually specified in the declaration. Once set, the size of an array cannot be changed during the program's execution.           | Strings, especially in higher-level languages, often have variable sizes. They can grow or shrink as characters are added or removed. The length of a string is determined by the number of characters it contains, not including any null-terminator.|
| Mutability    | Elements can be modified.                      | Mutable or immutable depending on the language. |
| Operations    | Manual operations for sorting, searching, etc.  | Built-in methods for concatenation, substring extraction, searching, etc. |

<br>
CODE AND OUTPUT : <BR>
CODE A: String <BR>
```
#include <iostream>
#include <string>
using namespace std;
int main() {
    string x;
    cout<< " Enter any word:";
    cin>> x;
    cout<< " Entered string is : \n"<<x<<endl;
    return 0;
}
```

OUTPUT A: <BR>
![EXP_STRING_A](https://github.com/sarakanyal03/CDS_Experiment7/blob/main/strings_a.png)

CODE B: Concatenation of strings <BR>
```
#include<iostream> 
#include<string> 
using namespace std; 
int main() { 
string x, y; 
cout<<"Enter strings: "; 
cin>>x>>y; 
cout<<"CONCATENATION: "<<x+y; 
return 0; 
}
```
OUTPUT B: <BR>

![EXP_STRING_B](https://github.com/sarakanyal03/CDS_Experiment7/blob/main/strings_b.png)

CODE C : Printing string in reverse <BR>
```
#include<iostream> 
#include<string> 
using namespace std; 
int main() { 
string x; 
cout<<"Enter a string: "; 
cin>>x; 
    int i; 
    for(i=x.length()-1;i>=0;i--) { 
        cout<<x[i]; 
    } 
    return 0; 
}
```

OUTPUT C: <BR>

![EXP_STRING_C](https://github.com/sarakanyal03/CDS_Experiment7/blob/main/string_c.png)

CODE D : Checking palindrome <BR>

```
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
```
OUTPUT D: <BR>

![EXP_STRING_D](https://github.com/sarakanyal03/CDS_Experiment7/blob/main/string_d.png)

<BR>
CONCLUSION : <BR>
In this experiment, we successfully implemented and manipulated strings and arrays in C++ programming language . The objectives of the experiment were to understand the underlying structure and behavior of these data types, as well as to gain hands-on experience with their manipulation through various operations such as initialization, accessing elements, modifying values, and iterating over their contents. <br>

Key Findings: <br>

Array Implementation: Arrays in C++ are static data structures with a fixed size determined at compile-time. We explored the limitations and benefits of using arrays, such as their constant-time access and the need for manual memory management when dealing with dynamic data sizes. <br>

String Implementation: C++ strings, provided by the Standard Template Library (STL), offer a more flexible and safer alternative to character arrays. Through the implementation, we observed how string objects handle memory management automatically, allow dynamic resizing, and provide a variety of built-in functions for string manipulation. <br>
 


