// 707A.cpp

// This file is part of CodeForces

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int m;
    cin >> n;
    cin >> m;
    int j;
    int i;
    string a;
    string array[m][n];
    for (i = 0; i < m; i += 1)
    {
        for (j = 0; j < n; j += 1)
        {
            cin >> array[i][j];
            a = array[i][j];
            if (a == "B" || a == "W" || a == "G")
            {
                continue;
            }
            else
            {
                cout << "#Color";
                return 0;
            }
        }
    }
    cout << "#Black&White";
}
