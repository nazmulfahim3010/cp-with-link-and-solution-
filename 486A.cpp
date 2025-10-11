#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    
    if(n%2!=0){
         long long even = n/2;
        long long even_sum = even*(even+1);

        long long odd_sum= ((even+1)*(even+1))*-1;

        cout<<odd_sum+even_sum<<endl;
    }
    else{
        long long even = n/2;
        long long even_sum = even*(even+1);

        long long odd_sum= ((even)*(even))*-1;

        cout<<odd_sum+even_sum<<endl;
    }
   

    
}
//https://codeforces.com/problemset/problem/486/A