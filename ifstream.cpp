#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    const string waves = "C:\\Users\\mykha\\Documents\\base.txt";
    ifstream fin;
    fin.open(waves);
    if (!fin.is_open())
    {
        cout << "Error open file" << endl;
    }
    else
    {
        cout << "file is open" << endl;
    }
    fin.close();

    return 0;
}