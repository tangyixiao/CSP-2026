#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int maxn=5e5+1;
int n,m;
int a[maxn];
int  solve(int i){
    vector<int> vec;
    for(int j=i;j<=n;j++){
        auto found=find(vec.begin(),vec.end(),a[j]);
        if(found==vec.end()){
            vec.push_back(a[j]);
            continue;
        }
        vec.erase(found,vec.end());
        vec.push_back(a[j]);
    }
    return (int)(!vec.empty()&&vec[0]==i);
}
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=m;i++){
        int ans=0;
        for(int j=1;j<=n;j++){
            ans+=solve(j);
        }
        cout<<ans<<" ";
    }
    return 0;
}
/*
4 3
1 2 1 3
*/
