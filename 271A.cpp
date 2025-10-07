#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    
    for(int i=num+1;i<=9100;i++){
        int a,b,c,d;
        a=i%10;
        b=(i%100)/10;
        c=(i%1000)/100;
        d=(i%10000)/1000;
        if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d){
            cout<<i<<endl;
            break;
        }
        
    }
}

//https://codeforces.com/problemset/problem/271/A