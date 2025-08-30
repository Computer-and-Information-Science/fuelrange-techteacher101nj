// Assignment 1 - Fuel Range
// TODO: YOUR NAME HERE
#include <iostream>
// TODO: Add the "using" statement
using namespace std;
int main() {
  // TODO: Declare your variables, with comments for each
  float capacity =0;
  float mpg = 0;
  int percentFull = 0;
  float milesLeft = 0;

  // TODO: Prompt for and input the required values
cout << " Please input the capacity of your fuel tank, the mpg, and the percent filled. " << endl;
cin >> capacity >> mpg >> percentFull;
  // TODO: Calculate the results
milesLeft = (capacity * percentFull)* mpg /100;

  // TODO: Output the results
  cout << "You can travel : " << milesLeft << " miles.";
}
