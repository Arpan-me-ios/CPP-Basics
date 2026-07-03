// 344A.cpp

// This file is part of CodeForces

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int array[n];
    int count=0;
    for(int i=0;i<n;i+=1){
        cin >> array[i];
    }
    for(int j=0;j<n;j+=1){
        if(array[j]!=array[j+1]){
            count+=1;
        }}
cout << count;
    }