#include <iostream>
using namespace std;

int main(){
  //Declare variables
  char c1, c2, c3;
  int b1, b2, b3;
  
  //Display message, receive input
  cout << "Permissions: ";
  cin >> c1 >> c2 >> c3;
  cout << endl;

  //assign binary values
  b1 = ((c1-48)/4);
  b2 = ((c1-48)%4)/2;
  b3 = (((c1-48)%4)%2)/1;
  
  //print user permissions and binary
  cout << "User:" << endl;
  cout << "read\t" << b1 << endl;
  cout << "write\t" << b2 << endl;
  cout << "execute\t" << b3 << endl << endl;

  //assign binary values
  b1 = ((c2-48)/4);
  b2 = ((c2-48)%4)/2;
  b3 = (((c2-48)%4)%2)/1;
  
  //print group permissions and binary
  cout << "Group:" << endl;
  cout << "read\t" << b1 << endl;
  cout << "write\t" << b2 << endl;
  cout << "execute\t" << b3 << endl << endl;

  //assign binary values
  b1 = ((c3-48)/4);
  b2 = ((c3-48)%4)/2;
  b3 = (((c3-48)%4)%2)/1;

  //print other permissions and binary
  cout << "Other:" << endl;
  cout << "read\t" << b1 << endl;
  cout << "write\t" << b2 << endl;
  cout << "execute\t" << b3 << endl << endl;

  return 0;
  
}
