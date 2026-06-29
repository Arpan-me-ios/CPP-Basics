// 282A.cpp

// This file is part of CodeForces

#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    int i;
    string a;
    x=0;
    int n;
    cin >> n;
    i = 0;
    while(i<n){
        cin >> a;
        if(a=="++X" || a=="X++"){
            x+=1;
        }
        else if(a=="--X"||a=="X--"){
            x-=1;
        }
        i+=1;
    }
    cout << x;
return 0;
}