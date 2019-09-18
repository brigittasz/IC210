#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Initialize variables 
    string currency1, currency2, type1, type2;
    double amount, midcur, output;
    char junk;
    //Take input for currency1 and currency2
    cin.ignore(8);
    cin >> amount >> currency1 >> junk >> junk >>  currency2;

    //Declare relevant values to compare, use
    string euros = "Euros";
    string dollars = "Dollars";
    string pounds = "Pounds";
    double to_euros = 0.8886;
    double to_pounds = 0.7446;

    //We match the currency1 to the correct name,
    //then convert and calculate its value in USD
    //Then convert it to our desired currency2 output
    
    if(currency1 == euros)
      midcur = amount/0.8886;
    else if(currency1 == pounds)
      midcur = amount/0.7446;
    else if(currency1 == dollars)
      midcur = amount;
    
    if(currency2 == euros)
    {
      output = to_euros*midcur;
      cout << output;
    }
    else if(currency2 == pounds)
    {
      output = to_pounds*midcur;
      cout << output;
    }
    else if(currency2 == dollars)
        cout << midcur;
    
}
