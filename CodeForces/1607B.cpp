// 1593A.cpp

// This file is part of CodeForces

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    for (long long i = 0; i < n; i += 1)
    {
        long long x0;
        cin >> x0;
        long long s;
        cin >> s;
        long long j = 1;
        while (j <= s)
        {
            if (x0 % 2 == 0)
            {
                x0 -= j;
            }
            else if (x0 % 2 != 0)
            {
                x0 += j;
            }
            j += 1;
        }
        cout << x0 << endl;
    }
}