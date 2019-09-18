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

    //declare stream
    fstream myfile;

    //while I can take in file values
    while(cin>>file){
        //if the input is not quit
        if(file != "quit"){

            //open myfile stream
            myfile.open(file.c_str());

            if(myfile){
                //if myfile is fine, declare relevant variables
                string word;
                double wordcount = 0;
                double sentencecount = 0;
                double totalwordlength = 0;
                
                //while I can take valid word values
                while(myfile>>word){
                    //check for . ! ? in a word to recognize whether it's an end of sentence 
                    
                    //if there's . ! ? symbol, it means it's the end of sentence so
                    //increase both the sentence counter and word counter by 1
                    if((word.find(".") != string::npos) || ((word.find("!") != string::npos)) || ((word.find("?")) != string::npos)){
                        double wordlength = word.length();
                        totalwordlength += wordlength;
                        sentencecount++;
                        wordcount++;
                    }
                    //otherwise, we're still counting the words only
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
                cout<<"Average sentence length: "<<averagesentencelength<<endl;
            }
        //close stream so that you can start taking in a potential file
        myfile.close();
        cout<<"Enter a filename: ";

        }
        //if file input is quit, quit the program
        else{
            return 0;
        }
    }
}