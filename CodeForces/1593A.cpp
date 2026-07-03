// 1593A.cpp

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
    for (int i = 0; i < n; i += 1)
    {
        vector<int> st;
        cin >> a >> b >> c;
        st.push_back(a);
        st.push_back(b);
        st.push_back(c);
        sort(st.begin(), st.end());
        if(a==st[2]&&a!=b&&a!=c){
            cout << 0 << " ";
        }
        else if(a!=st[2]&&st[0]!=st[2]){
            cout << ((st[2]-a)+1) << " ";
        }
        else if(a==st[2]&&(a==b||a==c)){
            cout << 1 << " ";
        }
        if(b==st[2]&&(b!=a&&b!=c)){
            cout << 0 << " ";
        }
        else if(b!=st[2]&&(st[0]!=st[2])){
            cout << ((st[2]-b)+1) << " ";
        }
        else if(b==st[2]&&(b==a||b==c)){
            cout << 1 << " ";
        }
        if(c==st[2]&&(c!=a&&c!=b)){
            cout << 0 << endl;
        }
        else if(c!=st[2]&&st[0]!=st[2]){
            cout << ((st[2]-c)+1) << endl;
        }
        else if(c==st[2]&&(c==a||c==b)){
            cout << 1 << endl;
        }
        else{
            cout << 1 <<" "<<1<<" "<< 1 << endl;
        }
    }
}