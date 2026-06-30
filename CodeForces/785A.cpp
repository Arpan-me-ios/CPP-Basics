// 734A.cpp

// This file is part of CodeForces

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=0;
    int x=0;
    string a;
    while(i<n){
        cin >> a;
        if(a=="Tetrahedron"){
            x+=4;}
        else if(a=="Cube"){
            x+=6;}
        else if(a=="Octahedron"){
            x+=8;}
        else if(a=="Dodecahedron"){
           x+=12;}
        else if(a=="Icosahedron"){
            x+=20;}
        i+=1;
        }
    cout << x;
    return 0;
}