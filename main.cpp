#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    const string wave = "base.txt";

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

    ifstream fin;
    fin.open(wave);
    if (!fin.is_open())
    {
        cout << "Error open file" << endl;
    }
    else
    {
        cout << "file is open" << endl;
        string symbol;
        while (!fin.eof())
        {
            symbol = "";
            getline(fin, symbol);
            cout << symbol << endl;
        }

    }
    fin.close();
    
    return 0;
}