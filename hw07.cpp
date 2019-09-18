//write a program that reads a year and prints out Is Leap Year or Is Not Leap Year.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    //initialize relevant variables
    int year;

    //input message
    cout << "Enter year: ";
    cin >> year;

    //check if leap year or not, then display result
    if(year%4 != 0)
    {
      cout << "Is Not Leap Year" << endl;
    }
    else 
    {
        if(year%100 !=0)
	  cout << "Is Leap Year" << endl;
        else
        {
            if(year%400 != 0)
	      cout << "Is Not Leap Year" << endl;
            else
            {
	      cout << "Is Leap Year" << endl;
            }
            
        }
        
    }
}
