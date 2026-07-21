// 318A.cpp

// This file is part of CodeForces

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    long long k;
    cin >> n;
    cin >> k;
    if (k <= ((n + 1) / 2))
    {
        cout << ((2 * k) - 1);
    }
    else
    {
        cout << 2 * (k - ((n + 1) / 2));
    }
}