#include<iostream>
#include<fstream>
using namespace std;
#include<string>
//ofstream = created and write files
//ifstream = reads from files
//fstream =  a combination of ofstream and ifstream: create, reads and writes to files

int main() {
    //create a file
    ofstream MyWriteFile("f.txt");
    MyWriteFile << "hi mister how do you do";
    //close the file
    MyWriteFile.close();

    string t;

    //read from the text file
    ifstream MyReadFile("f.txt");

    //use a while 

    while(getline (MyReadFile,t)) {
        cout<< t;
    }

    MyReadFile.close();

}

