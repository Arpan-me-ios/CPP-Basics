// 405A.cpp

// This file is part of CodeForces

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        v1.push_back(m);
    }

    sort(v1.begin(), v1.end());
    for (int j = 0; j < n; j++)
    {
        cout << v1[j] << " ";
    }
}