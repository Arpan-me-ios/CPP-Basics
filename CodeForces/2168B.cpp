// 2168B.cpp

// This file is part of CodeForces

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        multiset<char> st1;
        multiset<char> st2;
        string a;
        string b;
        int m;
        cin >> m;
        cin >> a;
        cin >> b;
        for (int j = 0; j < m; j++)
        {
            st1.insert(a[j]);
            st2.insert(b[j]);
        }
        if (st1 == st2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}