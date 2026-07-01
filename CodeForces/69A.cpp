// 69A.cpp

// This file is part of CodeForces

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 0;
    int x[n];
    int y[n];
    int z[n];
  for (i = 0; i < n; i += 1)
    {
        cin >> x[i];
        cin >> y[i];
        cin >> z[i];
    }
    int sx = 0;
    int sy=0;
    int sz=0;
    int j = 0;
    for (j = 0; j < n; j += 1)
    {
        sx += x[j];
        sy += y[j];
        sz += z[j];
    }
    if(sx==0&&sy==0&&sz==0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}