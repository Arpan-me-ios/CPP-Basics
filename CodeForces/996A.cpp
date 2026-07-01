// 996A.cpp

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
    s1 = trunc(n / 100);
    if (n % 100 != 0)
    {
        s2 = trunc((n % 100) / 20);
        n = n%100;
        if (n % 20!= 0)
        {
            s3 = trunc((n % 20) / 10);
            n=n%20;
            if (n % 10 != 0)
            {
                s4 = trunc((n % 10) / 5);
                n=n%10;
                if (n % 5 != 0)
                {
                    s5 = trunc((n % 5) / 1);
                }
            }
        }
    }
    cout << s1 + s2 + s3 + s4 + s5;
    return 0;
}