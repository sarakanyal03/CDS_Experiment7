//SARA KANYAL
//23070123115
//EXP 7E
//Using sum and average of array ( using range based for loop )
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
