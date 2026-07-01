// 1030A.cpp

// This file is part of CodeForces

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int a;
    cin >> n;
    for(int i=0;i<n;i+=1){
        cin >> a;
        if(a==1){
            cout << "HARD";
            return 0;
        }    
    }
    cout << "EASY";
}