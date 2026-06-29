// 977A.cpp

// This file is part of CodeForces

#include<bits/stdc++.h>
using namespace std;

int main(){
    int m;
    int n;
    cin >>
    cin >> n;
    int i=0;
    while(i<n){
        if(m%10==0){
            m=m/10;
        }
        else{
            m-=1;
        }
        i+=1;
    }
    cout << m;
    return 0;
}