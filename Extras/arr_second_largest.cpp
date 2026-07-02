#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5]={321,284,332,454,435};
    int m=0;
    int m2=0;

    int i=0;
    int j=0;
    while(i<5){
        if (arr[i]>m){
          m = arr[i];}
        i+=1;
    }
    while(j<5){
        if (arr[j]<m && arr[j]>m2){
          m2 = arr[j];}
        j+=1;
    }
    cout << m2;
    return 0;
}