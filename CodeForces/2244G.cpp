// 1999A.cpp

// This file is part of CodeForces

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i += 1)
    {
        int len;
        cin >> len;
        int arr[len];
        for (int j = 0; j < len; j++)
        {
            cin >> arr[j];
        }
        int maxp = 0;
        int curp = 0;
        for (int x = 0; x < len; x++)
        {
            for (int k = 0; k < len; k++)
            {
                if (abs(x - k) > max(arr[x], arr[k]) && x != k)
                {
                    curp += (arr[k] + arr[x]);
                    if (curp > maxp)
                    {
                        maxp = curp;
                        curp = 0;

                        cout << maxp << endl;
                        break;
                    }
                }
                else
                {
                    continue;
                                }
                cout<<1;
            }

            break;
        }
    }
}