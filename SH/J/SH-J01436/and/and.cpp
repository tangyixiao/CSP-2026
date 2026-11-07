#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005];
long long ans;
vector<int>v;
void d(int de){
    if(de>m){
        long long sum=v[0];
        for(int i:v){
            if(i==0) continue;
            sum&=a[i];
        }
        ans=max(sum,ans);
        return;
    }
    for(int i=1;i<=n;++i){
        if(!v.empty()){
            int flag=0;
            for(int j:v){
                if(i==v[j]){
                    flag=1;
                }
            }
            if(flag) continue;
        }
        v.push_back(i);
        d(de+1);
        v.pop_back();
    }
    return;
}
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    d[1];
    cout<<ans;
    return 0;
}
