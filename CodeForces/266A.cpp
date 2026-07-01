// 266A.cpp

// This file is part of CodeForces

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string a;
    cin >> n;
    cin >> a;
    int count = 0;
    int i = 0;
    for (i = 0; i < n; i += 1)
    {
        if (a[i] == a[i + 1])
        {
            count += 1;
        }
    }
    cout << count;
    return 0;
}
