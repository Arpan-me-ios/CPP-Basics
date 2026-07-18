// 339A.cpp

// This file is part of CodeForces

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    vector<int> v1;
    for (int i = 0; i < (a.size()); i += 2)
    {
        v1.push_back((a[i] - '0'));
    }
    sort(v1.begin(), v1.end());
    for (int j = 0; j < (v1.size() - 1); j += 1)
    {
        cout << v1[j] << '+';
    }
    int k=(int)v1.size();
    cout << v1[k-1];
}