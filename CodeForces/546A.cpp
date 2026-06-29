// 546A.cpp

// This file is part of CodeForces

#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    int n;
    int w;
    int i=1;
    int t=0;
    cin >> k >> n >> w;
    while(i<(w+1)){
        t = t+(i*k);
        i+=1;
    }
    if((t-n)>0){
        cout << (t-n);}
    else{
        cout << 0;
    }
    return 0;
}
