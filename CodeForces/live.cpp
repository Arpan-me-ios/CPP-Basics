// 2248A.cpp

// This file is part of CodeForces

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i += 1)
    {
        int m;
        cin >> m;
        int max = 0;
        int curcount = 0;
        for (int k = 0; k < m; k += 1)
        {
            char chara;
            cin >> chara;
            if (chara == '*')
            {
                if (curcount > max)
                {
                    max = curcount;
                }
                else
                {
                    curcount = 0;
                }
            }
            else if (chara == '#')
            {
               curcount += 1;
            }}
        cout << max;
        
    }
}