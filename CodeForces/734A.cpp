// 734A.cpp

// This file is part of CodeForces

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int i;
    int anton=0;
    int danik=0;
    string a;
    string s;
    cin >> n;
    cin >> a;
    i=0;
    while(i<n){
        s = a[i];
        if(s=="A"){
            anton+=1;
        }
        else if(s=="D"){
            danik+=1;
        }
        i+=1;
    }
    if(anton>danik){
        cout << "Anton";
    }
    else if(danik>anton){
        cout << "Danik";
    }
    else{
        cout << "Friendship";
    }
    return 0;
}