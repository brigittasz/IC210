#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Initialize variables 
    string currency1, currency2, type1, type2;
    double amount, midcur, output;
    char junk;
    //Take input for currency1
    cin.ignore(8);
    cin >> amount >>  currency1;

    //Declare relevant values to compare, use
    string euros = "Euros";
    string dollars = "Dollars";
    string pounds = "Pounds";
    string cadollars = "Canadian";
    string usdollars = "US";
    double to_euros = 0.8886;
    double to_pounds = 0.7446;
    double to_cadollars = 1.2841;
    
    //We match the currency1 to the correct name,
    //then convert and calculate its value in USD
    //Then convert it to our desired currency2 output

    //match, convert to usd
    if(currency1 == euros)
      midcur = amount/0.8886;
    else if(currency1 == pounds)
      midcur = amount/0.7446;
    else if(currency1 == dollars)
    {
      cin >> type1;
      if(type1 == usdollars)
      {
	midcur = amount;
      }
      else if(type1 == cadollars)
	midcur = amount/1.2841;
    }

    //take in currency2
    cin >> junk >> junk >> currency2;

    //calculate for output in desired currency2
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
    {
      cin >> type2;
      if(type2 == usdollars)
      {
	output = midcur;
        cout << output;
      }
      else if(type2 == cadollars)
      {
	output = to_cadollars*midcur;
        cout << output;
      }
    }
    
}
