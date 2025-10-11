#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x[n];
    bool hard=false;
    for(int i=0;i<n;i++){
        cin>>x[i];
        if(x[i]==1){
            hard=true;
        }

    }

    if(hard){
        cout<<"HARD"<<endl;
    }
    else{
        cout<<"EASY"<<endl;
    }
    return 0;
}