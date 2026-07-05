// 271A.cpp

// This file is part of CodeForces

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = n + 1;
    set<char> st;
    while (i > 0)
    {
        string a;
        a = to_string(i);
        st.emplace(a[1]);
        st.emplace(a[2]);
        st.emplace(a[3]);
        st.emplace(a[0]);
        if (st.size() == 4)
        {
            cout << i;
            break;
        }
        else
        {
            st.clear();
        }
        i += 1;
    }
}