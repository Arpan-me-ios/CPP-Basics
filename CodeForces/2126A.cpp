// 2126A.cpp

// This file is part of CodeForces

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int digit;
    int min = 9999;
    for (int j = 0; j < n; j++)
    {
        int m;
        cin >> m;
        int min=999;
        int count = (int)(log10(m) + 1);
        for (int i = 0; i < count; i++)
        {
            digit = static_cast<int>(trunc(m / pow(10, i))) % 10;
            if (digit < min)
            {
                min = digit;
            }}
        
        cout << min << endl;
    
}}