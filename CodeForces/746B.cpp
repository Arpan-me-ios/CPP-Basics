// 746B.cpp

// This file is part of CodeForces

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int word_length;
    cin >> word_length;
    string word;
    cin >> word;
    string nword;
    int cword_length = word_length;
    list<char>nlist;
    for (int i = 0; i < word_length; i += 1)
    {
        nlist[i] = word[trunc(cword_length / 2)];
        word.erase(trunc(cword_length / 2), 1);
        cword_length = word_length-i;
    }
}