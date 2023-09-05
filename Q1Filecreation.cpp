/*Write a C++ program to create a file and print “File created successfully” and throw an 
error if file is not created.*/
#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    ofstream fout;
    fout.open("E:/file/abc.txt");
    if(!fout)
    {
        cout<<"File not crated";
    }
    else{
        cout<<"File created successfully";
    }
    return 0;
}