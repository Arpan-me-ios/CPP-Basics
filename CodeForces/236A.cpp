// 318A.cpp

// This file is part of CodeForces

#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin >> a;
    set <char> s1;
    for(int i=0; i<a.length(); i++){
        s1.emplace(a[i]);
    }
    
    if(s1.size()%2==0){
        cout << "CHAT WITH HER!";
    }

    else{
        cout<<"IGNORE HIM!";
}}