// 1512A.cpp

// This file is part of CodeForces

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n;
    for(int i=0;i<n;i+=1){
        int a;
        int b;
        cin >> a;
        cin >> b;
        if(a<b){
            cout << a << " "<< b << endl;
        }
        else{
            cout << b << " " << a << endl;
        }}}