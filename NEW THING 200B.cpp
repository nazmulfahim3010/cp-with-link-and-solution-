#include<bits/stdc++.h>
using namespace std;
 int main(){

    int n;
    cin>>n;
    double a[n];
    double sum=0.000000000000;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(int i=0;i<n;i++){
        sum = sum + (a[i]/100.000000000000);
    }
    cout<< fixed << setprecision(12)<<(sum/n)*100.000000000000<<endl;


 }
 //https://codeforces.com/problemset/problem/200/B