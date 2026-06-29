// 617A.cpp

// This file is part of CodeForces

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int s1=0;
    int s2=0;
    int s3=0;
    int s4=0;
    int s5=0;
    cin >> n;
    s1 = trunc(n / 5);
    if (n % 5 != 0)
    {
        s2 = trunc((n % 5) / 4);
        n = n%5;
        if (n % 4!= 0)
        {
            s3 = trunc((n % 4) / 3);
            n=n%4;
            if (n % 3 != 0)
            {
                s4 = trunc((n % 3) / 2);
                n=n%3;
                if (n % 2 != 0)
                {
                    s5 = trunc((n % 2) / 1);
                }
            }
        }
    }
    cout << s1 + s2 + s3 + s4 + s5;
    return 0;
}