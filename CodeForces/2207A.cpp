// 2207A.cpp

// This file is part of CodeForces

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int j = 0; j < n; j += 1)
    {
        int str_len;
        cin >> str_len;
        string str;
        cin >> str;
        int change;
        int count = 0;
        int max_count = 0;
        int min_count = 0;
        for (int k = 0; k < str_len; k += 1)
        {
            if (str[k] == '1')
            {
                count += 1;
            }
        }
        min_count = count;
        max_count = count;
        for (int i = 1; i < str_len - 1; i += 1)
        {
            if (str[i - 1] == str[i + 1] && str[i - 1] == '1' && str[i] == '0')
            {
                min_count += 0;
                max_count += 1;
                str[i] = '1';
            }
            else if (str[i - 1] == str[i + 1] && str[i - 1] == '1' && str[i] == '1')
            {
                max_count += 0;
                min_count -= 1;
            }
        }

        cout << min_count << " ";
        cout << max_count << endl;
    }
}