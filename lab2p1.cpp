#include <iostream>
using namespace std;

int main(){
  //declare char variables for input and sum
  char c1, c2, c3, c4;
  int sum;

  //Display message, receive input
  cout << "Enter a 4-bit binary number: ";
  cin >> c1 >> c2 >> c3 >> c4;

  //Calculate output
  sum = (c1-48)*8 + (c2-48)*4 + (c3-48)*2 + (c4-48)*1;

  //Display output message and value
  cout << "In decimal "<< c1 << c2 << c3 << c4 << " = " << sum << endl;

  return 0;
  
}
