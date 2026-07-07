// 1986A.cpp

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
    int d1;
    int d2;
    int d3;
    for (int j = 0; j < n; j += 1)
    {
        cin >> a >> b >> c;
        int min = 110;
        int val;
        for (int l = 0; l < 11; l += 1)
        {
            d1 = abs(l - a);
            d2 = abs(l - b);
            d3 = abs(l - c);
            val = (d1 + d2 + d3);
            if (val < min)
            {
                min = val;
            }
            
        }
        cout << min << endl;
    }
}