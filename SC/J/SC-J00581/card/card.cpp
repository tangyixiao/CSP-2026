#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e5+6,M=3e5+6;
int n,m,a[N],ans[M],nxt[N],now[N];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		nxt[now[a[i]]]=i;
		now[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;){
			if(nxt[j]==0)ans[a[j++]]++;
			else j=nxt[j];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
