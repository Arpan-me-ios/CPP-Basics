// 492A.cpp

// This file is part of CodeForces

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int total=0;
    cin >> n;
    for (int i = 0; i >= 0; i += 1)
    {
        int sum = ((i * (i + 1)) / 2);
        total+=sum;
        if (total > n)
        {
            cout << i-1;
            return 0;
        }
        else
        {
            continue;
        }
    }
}