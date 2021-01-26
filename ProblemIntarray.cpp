// Isa Lee
// 2343486
// isalee@chapman.edu
// CPSC 298 - 01 Interterm (C++)
// Assignment 2 - Problem 1

#include <iostream>
using namespace std;

int main()
{
  int numArray[10];
  int i;
  for(i = 0; i < 10; ++i)
  {
    cout << "Number: ";
    cin >> numArray[i];
  }
  cout << "Elements: " << endl;
  for(i = 0; i < 10; ++i)
  {
    cout << numArray[i] << endl;
  }
}
