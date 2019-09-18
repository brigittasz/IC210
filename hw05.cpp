//[60pts] Write a program that reads in a 3-letter word
// in uppercase letters and prints out the same word with
// lowercase letters A typical run of the program should look 
//like (user input colored red):

#include <iostream>
using namespace std;

int main()
{
//Declare variable for input and output
char in1, in2, in3;
int key;
char out1, out2, out3;

//Receive 3-letter word in uppercase
cout << "Input a 3-letter word in uppercase letters: ";
cin >> in1 >> in2 >> in3;

//Shift key value
key = 'a' - 'A';

//Convert to lowercase
out1 = in1 + key;
out2 = in2 + key;
out3 = in3 + key;


//Print 3-letter word in lowercase
cout << "Output: " << out1 << out2 << out3 << endl;
return 0;

}
