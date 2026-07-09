// 1352B.cpp

// This file is part of CodeForces

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a;
    int b;
    cin >> n;
    for (int i = 0; i < n; i += 1)
    {
        int sumo = 0;
        int sume = 0;
        cin >> a >> b;
        for (int k=0; k<b-1; k+=1){
            sumo+=1;
            sume+=2;
        }
        if (a-sume>0 && (a-sume)%2==0){
            cout << "YES" << endl;
            for(int r=0; r<b-1 ; r+=1){
                cout << 2 << " ";}
            cout << a-sume << endl;
        }
        else if (a-sumo>0 && (a-sumo)%2!=0){
            cout << "YES" << endl;
            for(int h=0; h<b-1 ; h+=1){
                cout << 1 << " ";}
            cout << a-sumo << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}