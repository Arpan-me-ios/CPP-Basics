// 1883A.cpp

// This file is part of CodeForces

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int j = 0; j < n; j += 1)
    {
        string codestr;
        cin >> codestr;
        int arr[4];
        arr[0] = codestr[0] - '0';
        arr[1] = codestr[1] - '0';
        arr[2] = codestr[2] - '0';
        arr[3] = codestr[3] - '0';

        int curposition = 1;
        int t = 0;

        for (int i = 0; i < 4; i += 1)
        {
            if (arr[i] == curposition)
            {
                t += 1;
            }
            else if (arr[i] > curposition && curposition!=0)
            {
                t += ((arr[i] - curposition)+1);
            }
            else if (arr[i]<curposition && arr[i]!=0 && curposition!=0)
            {
                t += ((curposition - arr[i])+1);
            }
            else if (arr[i] == 0 && curposition!=0)
            {
                t += ((10 + (0 - curposition))+1);
            }
            else if (curposition==0){
                t += ((10-arr[i])+1);
            }
            curposition = arr[i];
        }
        cout << t << endl;
    }
}