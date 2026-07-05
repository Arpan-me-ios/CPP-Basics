// 492A.cpp

// This file is part of CodeForces

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<char> st;
    int i;
    string a;
    cin >> a;
    for (i = 0; i < n; i += 1)
    {
        st.insert(tolower(a[i]));
    }
    if (st.size() == 26)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}