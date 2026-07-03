// 1512A.cpp

// This file is part of CodeForces

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n;
    for(int i=0;i<n;i+=1){
        int m;
        cin >> m;
        int ar[m];
        for(int j=0;j<m;j+=1){
            cin >> ar[j];

        }
        for(int k=0; k<m; k+=1){
            if (ar[k]!=ar[k+1] && ar[k]==ar[k+2]){
                cout << (k+2) << endl;
            }
        }
    }
}