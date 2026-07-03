// 1850A.cpp

// This file is part of CodeForces

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a;
    int b;
    int c;
    for (int i = 0; i < n; i += 1)
    {
        cin >> a;
        cin >> b;
        cin >> c;
        if (a + b >= 10 || b + c >= 10 || a + c >= 10)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
