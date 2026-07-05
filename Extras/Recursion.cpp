// Cout.cpp

// This file is part of basic CPP

#include<bits/stdc++.h>
using namespace std;


void print_name(string name,int coun){
    cout << name;
    if(coun>5){
        return;
    }
    coun+=1;
    print_name(name,coun);
}

int main(){
    string a;
    int coun=0;
    print_name(a, coun);
}