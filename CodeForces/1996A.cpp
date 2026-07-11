// 1996A.cpp

// This file is part of CodeForces

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i += 1)
    {
        int a;
        cin >> a;
        if (a == 0)
        {
            cout << 0 << endl;
        }
        else if (a == 2)
        {
            cout << 1 << endl;
        }
        else if (a > 3)
        {
            int ncow = trunc(a / 4);
            int nhen = (a % 4) / 2;
            cout << ncow + nhen << endl;
        }
    }
}