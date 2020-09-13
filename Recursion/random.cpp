#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int StoI(string s){
    if(s.length() == 1)
        return s[0]-'0';

    int temp = StoI(s.substr(1));
    int val = s[0]-'0';


    return temp*10 + val;
}

int main(){
    string s;
    cout<<"Enter the number string : ";
    cin>>s;
    cout<<"Number is : "<<StoI(s);
    return 0;
}
