// 791A.cpp

// This file is part of CodeForces

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    int b;
    int n=999;
    int i;
    cin >> a >> b;
    for (i=1;i<=n;i+=1){
        a*=3;
        b*=2;
        if(a>b){
            cout << i;
            break;
        }}

return 0;
    }