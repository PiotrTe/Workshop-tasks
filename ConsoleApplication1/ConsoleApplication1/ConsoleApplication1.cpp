// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string input = "";
    string postInput = "";
    bool encrypt = 0 ;
    int key = 0 ;
    const int A = 65;
    const int Z = 90;
    cout << "Please input a word, encrypt boolean, and key integer value\n";
    cin >> input >> encrypt >> key;
    while (key > 25)
    {
        cout << "Key value cannot exceed 25. Please enter key value";
        cin >> key;
    }


    if (encrypt == 1)
    {
        for (char c: input)
        {
            if ((c + key) > 122) 
            {
            c -= 26;
            }
            postInput += (c += key);
        }
    }
    
    else if (encrypt == 0)
    {
        for (char c: input)
        {
            if ((c - key) < 97)
            {
            c += 26;
            }
            postInput += (c -= key);
        }
    }
    else
    {
        // Do nothing
    }
    cout << postInput;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
