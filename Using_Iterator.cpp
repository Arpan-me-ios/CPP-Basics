// Iterator.cpp

// This file is part of basic CPP

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(1);
    v.emplace_back(2);
    for(auto it=v.begin();it != v.end();it++){
        cout << *(it);
    }
    return 0;
}