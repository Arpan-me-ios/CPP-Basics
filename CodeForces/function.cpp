#include <bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

bool is_good(int k)
{
    set<int> st;
    int k_digit = (int)(log10(k) + 1);
    for (int it = 0; it < k_digit; it += 1)
    {
        st.insert(k % 10);
        k = trunc(k/10);
    }
    if (st.size() == k_digit)
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
    cin >> n;
    cout << is_good(n);
}