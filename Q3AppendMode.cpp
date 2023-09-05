/*Write a C++ program to open an output file 'a.txt' and append data to it*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("E:/file/a.txt",ios::app);
    if(!cout)
    {
        cout<<"Error file opening";
        return 1;
    }
    string name;
    cout<<"Enter string\n";
    getline(cin,name);
    fout<<" "<<name;

    fout.close();

    ifstream out;
    out.open("E:/file/a.txt",ios::in);
    cout<<"\nData in file:-\n";
    while(!out.eof())
    {
        getline(out,name);
        cout<<name;
    }
    out.close();
    return 0;
}