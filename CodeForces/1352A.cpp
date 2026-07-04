// 1030A.cpp

// This file is part of CodeForces

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a;
    int digit;
    int j;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i += 1)
    {
        cin >> a;
        int count = (int)(log10(a) + 1);
        for (j = count; j >= 0; j -= 1)
        {
            digit = ((int)(a / pow(10, j))) % 10;
            if (digit != 0)
            {
                sum += 1;}}
        cout << sum << endl;
        for (j = count; j >= 0; j -= 1)
        {
            digit = ((int)(a / pow(10, j))) % 10;
            if (digit != 0)
            {
                sum += 1;
                cout << digit * pow(10, j) << " ";
                continue;
            }
            
        }
    }
}
