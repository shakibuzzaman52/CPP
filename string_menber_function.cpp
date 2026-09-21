#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "ShakibUzZaman";

    cout<< str.length() << endl;

    cout<< str.substr(1, 5) << endl; // hakib

    cout<< str.at(1) << endl;  // h
    cout<< str[1] << endl;  // h

    cout<< str.find("Zaman") << endl;  // Zaman start at Index

    cout<< (int)str.find("Nishat") << endl;  // Nishat is not exist, so -1



    return 0;
}