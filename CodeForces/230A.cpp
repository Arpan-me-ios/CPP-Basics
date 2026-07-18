// 2168B.cpp

// This file is part of CodeForces

#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<char> st1;
    for(int i=0; i<4; i++){
        int m;
        cin>>m;
        st1.emplace(m);
    }
    cout<<4-(st1.size());}