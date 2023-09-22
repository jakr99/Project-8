// filter.cpp - Filter commented-out lines from STDIN
// Written by Nathan Jarus
// 2015-01-27  Initial program

#include<iostream>

using namespace std;

int main(int argc, char** argv) 
{
    string buf;
    char match;

	cout <<"Enter character";
	cin >> match;

    while(getline(cin, buf)) 
    {
        if(buf[0] != match) 
        {
            cout << buf << endl;
        }
    }

    return 0;
}

