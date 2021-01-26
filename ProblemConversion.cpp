// Isa Lee
// 2343486
// isalee@chapman.edu
// CPSC 298 - 01 Interterm (C++)
// Assignment 2 - Problem 4

#include <iostream>
#include <string>
using namespace std;

void input(float &feet, float &inches)
{
  cout << "Feet: ";
  cin >> feet;
  cout << "Inches: ";
  cin >> inches;
}

float feetInchesToMetersCm(float feet, float inches, float &meters, float &cm)
{
  float totalMeters = (feet * 0.3048) + ((inches * 0.3048 * 12) / 100);
  meters = (int)totalMeters;
  cm = (totalMeters - meters) * 100;
}

void output(float &feet, float &inches, float & meters, float &cm)
{
  cout << feet << " feet and " << inches << " inches is " << meters << " meters and " << cm << " centimeters" << endl;
}

int main()
{
  float feet;
  float inches;
  float meters;
  float cm;
  string cont("Yes");

  while(cont != "exit")
  {
    input(feet, inches);
    feetInchesToMetersCm(feet, inches, meters, cm);
    output(feet, inches, meters, cm);
    cout << "Type anything to continue, or type 'exit' to quit" << endl;
    cin >> cont;
  }
  return 0;
}
