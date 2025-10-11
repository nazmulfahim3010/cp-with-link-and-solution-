#include<bits/stdc++.h>
using namespace std;
 int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i =0; i<n;i++){
        int x,y;
        cin>>x>>y;
        if(x<=y && x!=y && (y-x)>=2){
            count++;
        }
        
    }
    cout<<count<<endl;
 }