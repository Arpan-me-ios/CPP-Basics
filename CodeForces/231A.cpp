// 231A.cpp

// This file is part of CodeForces

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string m;
    int i=0;
    int count=0;
    cin >> n;
    while(i<(n+1)){
      getline(cin,m);
      if(m == "1 1 1" || m == "1 1 0" || m == "1 0 1" || m == "0 1 1"){
        count+=1;}
      else if(m == "0 0 0" || m == "0 0 1" || m == "0 1 0" || m == "1 0 0"){
        count+=0;}
      i+=1;}
cout << count;
return 0;
}