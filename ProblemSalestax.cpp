// Isa Lee
// 2343486
// isalee@chapman.edu
// CPSC 298 - 01 Interterm (C++)
// Assignment 2 - Problem 3

#include <iostream>
using namespace std;

float addTax(float taxRate, float cost)
{
  taxRate /= 100;
  return cost + (taxRate * cost);
}

int main()
{
  float taxPercent;
  float price;
  float totalPrice;
  cout << "Price: ";
  cin >> price;
  cout << "Tax Percent: ";
  cin >> taxPercent;
  totalPrice = addTax(taxPercent, price);
  cout << "Price after tax: " << totalPrice << endl;
}
