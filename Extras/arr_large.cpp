#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int m=0;
    int i=0;
    while(i<5){
        if (arr[i]>m){
          m = arr[i];}
        i+=1;
    }
    cout << m;
    return 0;
}