#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
const int M=3e5+5;
int n,m;
int a[N],p[N],lst[N],f[N];
vector<int>g[N];
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=n;i>=1;i--){
        if(!p[a[i]])p[a[i]]=i;
    }
    for(int i=n;i>=1;i--){
        if(!lst[a[i]]){
            g[i+1].push_back(i);
        }
        else{
            g[lst[a[i]]].push_back(i);
        }
        lst[a[i]]=i;
    }
    for(int i=1;i<=n;i++){
        for(int j:g[i]){
            f[i]+=f[j];
        }
        f[i]++;
    }
    for(int i=1;i<=m;i++){
        cout<<f[p[i]]<<' ';
    }
}