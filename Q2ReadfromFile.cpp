/*Write a C++ program to read a text file and count the number of characters in it.*/
#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;
int main()
{
    string filename;
    cout<<"Enter file path(E:/file/abc.txt)like that\n";
    cin>>filename;
    ifstream fin(filename);
    if(!fin.is_open())
    {
        cout<<"Error file opening";
        return 1;
    }
    int count=0;
    char c;
    while(fin.get(c))
    {
        count++;
    }
    fin.close();
    if(count==0)
    {
        cout<<"Nothing in file\n";
    }
    else{
        cout<<"Number of charecter in file:- "<<count<<endl;
    }
    return 0;
    
}