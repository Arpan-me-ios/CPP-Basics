// 71A.cpp

// This file is part of CodeForces

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=0;
    int i=0;
    string a;
    cin >> n;
    while(i<n){
        cin >> a;
        if(a.length()>10){
            cout << a[0] << (a.length()-2) << a[a.length()-1] << endl;}
        else{
            cout << a << endl;
        }
        i+=1;
    }
return 0;
}