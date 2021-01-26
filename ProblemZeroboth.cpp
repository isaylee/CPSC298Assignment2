// Isa Lee
// 2343486
// isalee@chapman.edu
// CPSC 298 - 01 Interterm (C++)
// Assignment 2 - Problem 2

#include <iostream>
using namespace std;

void zeroBoth(int var1, int var2)
{
  var1 = 0;
  var2 = 0;
  cout << "Variable 1 = " << var1 << endl;
  cout << "Variable 2 = " << var2 << endl;
}

int main()
{
  int varA;
  int varB;
  zeroBoth(varA, varB);
  return 0;
}
