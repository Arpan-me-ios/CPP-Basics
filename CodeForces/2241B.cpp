// 1030A.cpp

// This file is part of CodeForces

#include <bits/stdc++.h>
using namespace std;

bool is_good(int k)
{
    set<int> st;
    for (int it = 0; it < 99999; it += 1)
    {
        st.insert(k % 10);
        k = trunc(k / 10);
        if(k==0){
            break;
        }
    }
    if (st.size() <= 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    int m;
    cin >> n;
    for (int i = 0; i < n; i += 1)
    {
        cin >> m;

        for (int k = 2; k < 99999; k += 1)
        {
            if (is_good(k)){
             if (is_good(k*m)){
                 cout << k << endl;
                 break;
             }
             else
             {
                 continue;
             }}
        }
    }
}