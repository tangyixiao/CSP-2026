#include <bits/stdc++.h>
using namespace std;
#define int long long
int cnt[300005];
bool vis[300005];
int a[300005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		cnt[a[i]]=i;
	}
	for(int i=1;i<=m;i++) cout<<cnt[i]<<" ";
}
