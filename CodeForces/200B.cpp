// 200B.cpp

// This file is part of CodeForces

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i=0;
    double y;
    double x=0;
    for(i=0;i<n;i+=1){
        cin >> y;
        x+=y;
    }
cout << setprecision(12) << (x/n);
return 0;
}