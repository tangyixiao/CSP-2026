#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int maxn=2e5+1;
int n,a[maxn],m;
vector<int> v;
int mx;
void dfs(int i){
    if(i==n){
        if((int)v.size()==m){
            int ans=v[0];
            for(int vi:v){
                ans=ans&vi;
            }
            mx=max(mx,ans);
        }
        return;
    }
    for(int j=i+1;j<=n;j++){
        v.push_back(a[j]);
        dfs(j);
        v.pop_back();
    }
}
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    dfs(0);
    cout<<mx<<endl;
    return 0;
}
/*
4 2
3 15 12 12
*/
