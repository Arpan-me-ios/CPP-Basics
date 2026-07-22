// 474B.cpp

// This file is part of CodeForces

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n_pile;
    cin>>n_pile;
    int arr[n_pile];
    int cursum=0;
    for(int i_pile=0;i_pile<n_pile;i_pile++){
        int i_len;
        cin >> i_len;
        cursum+=i_len;
        arr[i_pile]=cursum;
    }
    int n_jw;
    cin >> n_jw;
    for(int i_jw=0;i_jw<n_jw;i_jw++){
        int pos;
        cin >> pos;
        int index = lower_bound(arr,arr+n_pile,pos)-arr;
        cout<<index+1<<endl;
    }
}