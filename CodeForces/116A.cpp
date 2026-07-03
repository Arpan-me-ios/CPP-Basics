// 116A.cpp

// This file is part of CodeForces

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int a;
    int b;
    int min=0;
    int p_current=0;
    cin >> n;
    for(int i=0;i<n;i+=1){
        cin >> a;
        cin >> b;
        p_current+=(b-a);
        if(p_current>min){
            min=p_current;
        }}
    cout << min;}