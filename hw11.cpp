#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    //get in file
    string file;
    cout<<"Enter a filename: ";
    cin>>file;

    //open stream
    ifstream myfile(file.c_str());

    if(myfile){
        //set ranges, and data variable
        int data;
        int range1 = 0;
        int range2 = 0;
        int range3 = 0;
        int range4 = 0;
        
        while(myfile>>data){
            //check for ranges, count number of data that satisfies each expression
            if(10<=data && data<=19){
                range1++;
            }
            else if(20<=data && data<=29){
                range2++;
            }
            else if(30<=data && data<=39){
                range3++;
            }
            else if(40<=data && data<=49){
                range4++;
            }
        }

        //display histogram results
        cout<<"[10,19]: ";
        for(int i = 0; i<range1; i++)
            cout<<"*";
        cout<<endl;

        cout<<"[20,29]: ";
        for(int j = 0; j<range2; j++)
            cout<<"*";
        cout<<endl;

        cout<<"[30,39]: ";
        for(int k = 0; k<range3; k++)
            cout<<"*";
        cout<<endl;

        cout<<"[40,49]: ";
        for(int l = 0; l<range4; l++)
            cout<<"*";
        cout<<endl;
    }
    //close stream
    myfile.close();

}