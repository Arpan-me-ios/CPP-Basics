// 1926A.cpp

// This file is part of CodeForces

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i += 1)
    {
        string a;
        cin>>a;
        int ca=0;
        int cb=0;
        for(int j=0; j<5; j++){
            if(a[j]=='A'){
                ca+=1;
            }
            else if(a[j]=='B'){
                cb+=1;
            }}
        if(ca>cb){
            cout<<'A'<<endl;
        }
        else{
            cout<<'B'<<endl;
        }
        }}