// 2218B.cpp

// This file is part of CodeForces

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i += 1)
    {
        int d1;
        int d2;
        int d3;
        int d4;
        int d5;
        int d6;
        int d7;
        int cursum;
        int max=-99999;
        int arr[7];
        cin >> d1 >> d2 >> d3 >> d4 >> d5 >> d6 >> d7;
        arr[0]=d1;
        arr[1]=d2;
        arr[2]=d3;
        arr[3]=d4;
        arr[4]=d5;
        arr[5]=d6;
        arr[6]=d7;
        int sum = d1+d2+d3+d4+d5+d6+d7;
        for(int j=0;j<7;j+=1){
            if(-sum+(2*arr[j])>max){
                max=-sum+(2*arr[j]);
            }
        }
        cout << max << endl;
    }
}

