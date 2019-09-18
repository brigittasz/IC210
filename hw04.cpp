#include <iostream>
using namespace std;

int main()
{
    int feet1, feet2, inch1, inch2;
    char c1, c2; 
    int totalinch1, totalinch2, footdif, inchdif;

    cout << "Enter two lengths in feet and inches (larger first!)" << endl;
    cin >> feet1 >> c1 >> inch1 >> c1 >> c1;
    cin >> feet2 >> c1 >> inch2 >> c1 >> c1;
    
    totalinch1 = feet1 * 12 + inch1;
    totalinch2 = feet2 * 12 + inch2;

    footdif = (totalinch1-totalinch2)/12;
    inchdif = (totalinch1 - totalinch2)%12;

    cout << "Difference is " << footdif << c1 << " " << inchdif << c1 << c1 << endl;

    return 0;
}
