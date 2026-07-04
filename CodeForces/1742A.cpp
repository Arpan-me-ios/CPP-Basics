// 1742A.cpp

// This file is part of CodeForces

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a;
    int b;
    int c;
    cin >> n;
    for(int i=0;i<n;i+=1){
        cin >> a >> b >> c;
        if(a+b==c){
            cout << "YES" << endl;
        }
        else if(b+c==a){
            cout << "YES" << endl;
        }
        else if(a+c==b){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}