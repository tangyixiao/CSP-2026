#include<bits/stdc++.h>
using namespace std;
#define int long long
int f[200005];
int v[200005];
int q[200005];
map<int,int>mp;
int u[200005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout); 
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
        cin>>v[i];
        q[i]=mp[v[i]];
        mp[v[i]]=i;
    } 
    for(int i=n;i>=1;i--){
        if(q[i]==0){
            continue;
        }
        f[q[i]]++;
        f[i]--;
    }
    for(int i=1;i<=n;i++){
        f[i]=f[i-1]+f[i];
    }
    for(int i=1;i<=n;i++){
        u[v[i]]=max(u[v[i]],i-f[i]);
    }
    for(int i=1;i<=m;i++){
        cout<<u[i]<<" ";
    }
	return 0;
} 
/*
5 3
31 3 1 15 7

4 2
3 15 12 12

*/
