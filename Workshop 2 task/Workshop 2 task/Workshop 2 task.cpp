// Workshop 2 task.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;
int countWords(char*);
int main()
{
    char buf[1024];
    string filename = "input.txt";
    ifstream file(filename);

    if (file.is_open())
    {
        while (!file.eof()) {
            file.getline(buf, 1024);
            cout << buf << endl;
        }
        cout << countWords(buf);
        int numberOfSentences;
    }
}

int countWords(char* input) {
    string s(input);
    stringstream ss(s);

    istream_iterator<string>it(ss);
    istream_iterator<string>end;
    int wordCount = 0;
    while (it != end) {
        it++;
        wordCount++;
    }
    return wordCount;
}


