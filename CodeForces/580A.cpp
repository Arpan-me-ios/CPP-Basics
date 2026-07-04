// 580A.cpp

// This file is part of CodeForces

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = 0;
    int b;
    int max = 0;
    int num;
    vector<int> v1;
    for (int i = 0; i < n; i += 1)
    {
        cin >> b;

        if (b >= a)
        {
            v1.push_back(b);
        }
        else if (b < a)
        {
            num = v1.size();
            if (num > max)
            {
                max = num;
            }
            v1.clear();
            v1.push_back(b);
        }
        a = b;
    }
    num = v1.size();

    if (num > max)
{
    max = num;
};
cout << max;
}