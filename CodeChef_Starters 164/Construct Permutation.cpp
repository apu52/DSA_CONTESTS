#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        if(n%2==0){cout<<-1<<endl;continue;}
        vector<int>o,e;
        for(int i=1;i<=n;++i){
            if(i%2==0)e.push_back(i);
            else o.push_back(i);
        }
        sort(e.rbegin(),e.rend());
        vector<int>r;
        int oi=0,ei=0;
        for(int i=0;i<n;++i){
            if(i%2==0)r.push_back(o[oi++]);
            else r.push_back(e[ei++]);
        }
        for(int x:r)cout<<x<<" ";
        cout<<endl;
    }
    return 0;
} 
