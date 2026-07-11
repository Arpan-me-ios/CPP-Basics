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
        string num;
        cin >> num;
        int sum=0;
        for (int j=0;j<num.length();j++){
            sum += (num[j]-'0');
        }
        cout << sum << endl;
    }
}