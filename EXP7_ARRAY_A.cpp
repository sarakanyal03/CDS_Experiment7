//SARA KANYAL
//23070123115
//EXP 7A 
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
