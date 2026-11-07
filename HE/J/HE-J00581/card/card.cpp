#include<bits/stdc++.h>
using namespace std;
int n,m,t=1,a[1000005],ans[1000005];
vector<int> v;
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    while(t<=n){
        v.resize(0);
        for(int i=t;i<=n;i++){
            v.push_back(a[i]);
            for(int j=0;j<v.size()-1;j++){
                if(v[j]==a[i]){
                    for(int k=j;k<v.size()-1;k++){
                        v[k]=-1;
                    }
                }
            }
        }
        t++;
        for(int i=0;i<v.size();i++){
            for(int j=1;j<=m;j++){
                if(v[i]==j){
                    ans[j]++;
                }
            }
        }
    }
    for(int i=1;i<=m;i++){
        cout<<ans[i]<<' ';
    }
    return 0;
}
