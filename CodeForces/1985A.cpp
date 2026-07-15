// 1999A.cpp

// This file is part of CodeForces

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i += 1)
    {
        string a;
        string b;
        char x;
        char y;
        cin>>a;
        cin >> b;
        x=a[0];
        y=b[0];
        a[0]=y;
        b[0]=x;
        cout << a << " " << b << endl;}}
