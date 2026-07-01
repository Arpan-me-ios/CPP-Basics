// 158A.cpp

// This file is part of CodeForces

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int k;
    int i=0;
    int j=0;
    int count=0;
    cin >> n;
    cin >> k;
    int arr[n];
    while(i<n){
        cin >> arr[i];
        i+=1;
    }
    while(j<n){
        if(arr[k-1]<=arr[j] && arr[j]>0){
            count+=1;
        }
        j+=1;}
    cout << count;
    return 0;}