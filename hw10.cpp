//reads in names, birthdates from a given file
//reports the number of adults and children in the list

//ask for filename
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main(){
    //declare variables to take file, name, month, day, year values
    string file, name;
    int month, day, year;
    char junk;
    //set counters for children and adults
    int child = 0;
    int adult = 0;
    //input message
    cout<<"Filename: ";
    cin>>file;
    //open stream
    fstream myfile;
    myfile.open(file.c_str());

    if(myfile){
        while(myfile>>name>>month>>junk>>day>>junk>>year){
            if(year==0){
                //account for september birthdays
                if(month==9){
                    //those born after the 27th
                    if(day>27)
                        child++;
                    //those born before the 27th
                    else if(27>=day>=0)
                        adult++;
                }
                //birthdays that come before september
                else if((month<9)&&(day>=0))
                    adult++;
                //birthdays that come after september
                else if(month>9)
                    child++;
            }
            //those born after 2000
            else if(20>year>=1)
                child++;
            //those born before 2000
            else if(year>=20)
                adult++;
        }
        //print number of adults and children
        cout<<adult<<" adults and "<<child<<" children";
    }
    //quit if file is not found
    else
    {
        cout<<"File not found!"<<endl;
        return 1;
    }
    //close stream once done
    myfile.close();
    return 0;
}