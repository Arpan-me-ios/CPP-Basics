// 2241A.cpp

// This file is part of CodeForces

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int x;
    int y;
    int z;
    int i;
    cin >> n;
    for(i=0;i<n;i+=1){
        cin >> x >> y;
        if(x%y == 0){
            cout << "YES" << endl;}
        else{
            cout << "NO" << endl;;
        }
    }
    return 0;
}