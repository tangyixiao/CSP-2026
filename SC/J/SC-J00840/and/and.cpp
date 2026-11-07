#include <bits/stdc++.h>
using namespace std;

int n,m;
long long Max=0;
long long arr[200005]={};

void dfs(int idx,long long sum,int chosen){
    if(idx==n+1){
        if(chosen==m){
            Max=max(Max,sum);
        }
        return;
    }

    dfs(idx+1,sum,chosen);
    dfs(idx+1,(sum&arr[idx]),chosen+1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("add.in","r",stdin);
    freopen("add.out","w",stdout);

    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    for(int i=1;i<=n;i++){
        dfs(i+1,arr[i],1);
    }

    cout<<Max;
    return 0;
}
