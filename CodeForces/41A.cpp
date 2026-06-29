// 41A.cpp

// This file is part of CodeForces

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int f=0;
    string a;
    string b;
    cin >> a;
    cin >> b;
    n = a.length();
    int i = 0;

    if(a.length()!=b.length()){
        cout << "NO";
    }

    // FOR EVEN

    else if(n%2==0){
     while (i < n)
      {
          if(a[i] == b[(n - (i+1))])
          {
              f+=1;
          }
          else if(a[i] != b[(n - (i+1))])
          {
              f+=0;
          }
          i += 1;
      }
     if(f==n){
      cout << "YES";}
     else if(f!=n){
        cout<<"NO";
    }}


    // FOR ODD


    else{
         while(i < n)
      {
          if(a[i] == b[(n - (i+1))])
          {
              f+=1;
          }
          else if(a[i] != b[(n - (i+1))])
          {
              f+=0;
          }
          i += 1;
      }
     if(f==n){
      cout << "YES";}
     else{
        cout<<"NO";
    }}
    return 0;}