//prompt user for a filename of a textfile
//print total number of words in file
    //while you can take in words, find the length of word 
    //add to initial length to find sum
//print average word length
    //calculate average word length first

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    //get file
    string file;
    cout<<"Enter a filename: ";
    cin>>file;

    //open myfile stream
    fstream myfile;
    myfile.open(file.c_str());

    if(myfile){
        //initialize relevant variables
        string word;
        double wordcount = 0;
        double totalwordlength = 0;

        //count the words, calculate totalwordlength at each additional word
        while(myfile>>word){
            //works when i set the scope locally ....
            int wordlength = word.length();
            totalwordlength += wordlength;
            wordcount++;
        }
        //display word count
        cout<<"Word count: "<<wordcount<<endl;
        //evaluate for average word length, then print 
        double averagewordlength = double(totalwordlength)/wordcount;
        cout<<"Average word length: "<<averagewordlength<<endl;
    }
    
    myfile.close();
    return 0;
}
