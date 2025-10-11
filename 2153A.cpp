# include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int> s;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            s.insert(x);
        }

        int count=0;
        int y=INT_MIN;
        for(auto num : s){
            if(y<num){
                y=num;
                count++;
            }
        }

        cout<<count<<endl;;
    }
 }