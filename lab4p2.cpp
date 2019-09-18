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
        double sentencecount = 0;
        double totalwordlength = 0;

        while(myfile>>word){
            //sentencecount increases only when one of . ? ! are used
            //wordcount increases everytime myfile takes a word in
            if((word.find(".") != string::npos) || ((word.find("!") != string::npos)) || ((word.find("?")) != string::npos)){
                double wordlength = word.length();
                totalwordlength += wordlength;
                sentencecount++;
                wordcount++;
            }
            else{
                double wordlength = word.length();
                totalwordlength += wordlength;
                wordcount++;
            }

        }
        //display word count
        cout<<"Word count: "<<wordcount<<endl;
        //evaluate for average word length, then print 
        double averagewordlength = double(totalwordlength)/wordcount;
        cout<<"Average word length: "<<averagewordlength<<endl;
        //evaluate for average sentence length, then print
        double averagesentencelength = wordcount/sentencecount;
        cout<<"Average sentence length: "<<averagesentencelength;
    }
    
    //close stream after done reading the file
    myfile.close();
    return 0;
}