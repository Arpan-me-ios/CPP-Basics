// 1352B.cpp

// This file is part of CodeForces

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a;
    int b;
    cin >> n;
    for (int i = 0; i < n; i += 1)
    {
        int sum = 0;
        cin >> a >> b;
        if (a % 2 == 0)
        {
            for (int k = 0; k < b - 1; k += 1)
            {
                sum += 2;
            }
        
            if ((a - sum) % 2 == 0 && (a - sum) > 0)
            {
                cout << "YES" << endl;
                for (int d = 0; d < b - 1; d += 1)
                {
                    cout << 2 << " ";
                }
                cout << (a - sum) << endl;
            }
            else
            {
                cout << "NO" << endl;
            }}
        else
        {
            for (int j = 0; j < b - 1; j += 1)
            {
                sum += 1;
            }
            if ((a - sum) % 2 != 0 && (a - sum) > 0)
            {
                cout << "YES" << endl;
                for (int r = 0; r < b - 1; r += 1)
                {
                    cout << 1 << " ";
                }
                cout << a - sum << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}