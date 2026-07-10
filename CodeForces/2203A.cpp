// 2203A.cpp

// This file is part of CodeForces

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double a;
    double b;
    double c;
    for (int j = 0; j < n; j += 1)
    {
        cin >> a >> b >> c;
        int max_h = trunc(c / b)+1;
        cout << ceil(a / max_h) << endl;
    }
}
