#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    ///read in filename
    string file;
    cout<<"Filename: ";
    cin>>file;
    
    string name;
    float hw, quiz, exam, average;
    float best = 0;
    string bestname;
    
    //open stream
    fstream myfile;

    myfile.open(file.c_str());
        
        if(myfile){
            //get rid of first line
            string junk;
            getline(myfile, junk);

            while(myfile>>name>>hw>>quiz>>exam){
                //reads in name, and hw, quiz, exam score
                average = hw*0.2+quiz*0.2+exam*0.6;
                //prints name, average score
                cout<<name<<" "<<average<<endl;

                //saves best student name
                if(average>best){
                    best = average;
                    bestname = name;
                }
            }
            //prints best student name
            cout<<"The best student is "<<bestname<<"."<<endl;

        }
    myfile.close();
}