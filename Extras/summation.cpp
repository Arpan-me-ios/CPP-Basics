// Summation.cpp

// This file is part of basic CPP

#include <bits/stdc++.h>
using namespace std;

int sum_n(int i, int n)
{
    int rsum = 0;
    rsum += i;
    if (i > n)
    {
        return 0;
    }
    return i+sum_n(i+1,n);
}

int main()
{
    int n;
    cin >> n;
    cout << sum_n(1, n);
}