// 389B.cpp

// This file is part of CodeForces

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nboy;
    vector<int> vboys;
    cin >> nboy;
    for (int i = 0; i < nboy; i++)
    {
        int dboy;
        cin >> dboy;
        vboys.emplace_back(dboy);
    }
    int ngirl;
    vector<int> vgirls;
    cin >> ngirl;
    for (int j = 0; j < ngirl; j++)
    {
        int dgirl;
        cin >> dgirl;
        vgirls.emplace_back(dgirl);
    }
    sort(vboys.begin(), vboys.end());
    sort(vgirls.begin(), vgirls.end());
    int count = 0;
    int nreq;
    if(nboy>ngirl){
        nreq=ngirl;
    }
    else{
        nreq=nboy;
    }
    for (int k = 0; k < nreq; k++)
    {
        if (abs(vboys[k] - vgirls[k]) <= 1)
        {
            count += 1;
        }
        else
        {
            count += 0;
        }
    }
    cout << count;
}