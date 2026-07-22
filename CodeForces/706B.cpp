// 706B.cpp

// This file is part of CodeForces

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n_shops;
    cin >> n_shops;
    int arr[n_shops];
    for(int shop_iterator=0;shop_iterator<n_shops;shop_iterator++){
        int cost;
        cin >> cost;
        arr[shop_iterator]=cost;
    }
    sort(arr,arr+n_shops);
    int n_days;
    cin >> n_days;
    int min=0;
    int max=n_shops-1;
    for (int day_iterator=0;day_iterator<n_days;day_iterator++){
        int money;
        cin >> money;
        int index = upper_bound(arr, arr + n_shops, money) - arr;
        cout << index << '\n';
    }
}
   