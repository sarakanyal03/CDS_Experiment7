//SARA KANYAL
//23070123115
//EXP 7B

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




