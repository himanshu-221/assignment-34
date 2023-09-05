/*Write a program to copy the contents of one text file to another while changing the case 
of every alphabet.*/
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
    char c;
    ifstream inputfile;
    ofstream outputfile;
    outputfile.open("E:/file/abc.txt",ios::app);
    inputfile.open("E:/file/a.txt",ios::in);
    while (inputfile.get(c))
    {
        c = toupper(c);
        outputfile<<c;
    }
    outputfile.close();
    ifstream inputfileprint;
    inputfileprint.open("E:/file/abc.txt",ios::in);

    while(inputfileprint.get(c))
        {
            cout<<c;
        }
        inputfileprint.close();
    
   
    inputfile.close();
    inputfileprint.close(); 
    //outputfile.close();
    return 0;
}