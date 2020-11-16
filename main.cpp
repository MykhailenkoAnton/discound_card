#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    const string wave = "C:\\Users\\mykha\\Documents\\base.txt";

    ofstream fout;

    fout.open(wave,ofstream::app);

    if(!fout.is_open())
    {
        cout << "Error for open file";
    }
    else
    {
        cout << "Enter number: ";
        string number;
        getline(cin, number);
        fout << "\n" << number;
    }
    fout.close();

    return 0;
}