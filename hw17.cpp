#include <iostream>
using namespace std;

//greatest common divisor prototype
int gcd(int a, int b);

int main(){
    int numerator, denominator;
    char ch;
    //while i can take in fractions I can find out whether they are lowest term
    while(cin>>numerator>>ch>>denominator>>ch){
        int num = gcd(numerator, denominator);
        //if greatest common divisor is 1, it cannot be divided further, 
        //thus, the fraction is in its lowest term
        if(num==1){
            cout<<numerator<<"/"<<denominator<<" is in lowest terms!"<<endl;
        }
        //break loop and return succes 1 upon semicolon
        if(ch==';'){
            break;
            return 1;
        }
    }
}
//define greatest common divisor function
int gcd(int a, int b){
    while(!b==0){
        int remainder = a%b;
        a = b; 
        b = remainder;
    }
    return a;
}
