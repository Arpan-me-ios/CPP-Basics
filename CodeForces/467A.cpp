// 467A.cpp

// This file is part of CodeForces

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i;
    int a;
    int b;
    int count=0;
    for(i=0;i<n;i+=1){
        cin >> a >> b;
        if(b-a>=2){
            count+=1;
        }
    }
    cout << count;
    return 0;
}