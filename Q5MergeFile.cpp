/*Write a C++ program to merge the two files*/
#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    ifstream inputFile1,intputFile2;
    ofstream mergeFile;
    inputFile1.open("E:/file/a.txt",ios::in);
    intputFile2.open("E:/file/abc.txt",ios::in);
    mergeFile.open("E:/file/Merge.txt",ios::in|ios::trunc);
    char c;
    if(!mergeFile)
    {
        cout<<"Error in file opening\n";
        inputFile1.close();
        intputFile2.close();
    }
    else{
        while(inputFile1.get(c))
        {
            mergeFile<<c;
        }
        mergeFile<<"\n";
        while(intputFile2.get(c))
        {
            mergeFile<<c;
        }
    }

    inputFile1.close();
    intputFile2.close();
    mergeFile.close();
    return 0;
}