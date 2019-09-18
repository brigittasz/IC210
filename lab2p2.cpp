#include <iostream>
using namespace std;

int main(){
  //Declare variables
  int num;
  int b1, b2, b3, b4;
  cout << "Enter a number between 0 and 15: ";
  cin >> num;

  //Convert to binary
  b1 = num/8;
  b2 = (num%8)/4;
  b3 = ((num%8)%4)/2;
  b4 = (((num%8)%4)%2)/1;

  //Print message output and digits
  cout << num << " in binary is " << b1 << b2 << b3 << b4 << endl;
  return 0;
}
