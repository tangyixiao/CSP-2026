#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[5001011];
bool f[3000001];
int fk[1010101];
int to[1910101];
int ans[10100101];
signed main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) to[i]=i;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(f[a[i]]) to[fk[a[i]]]=i;
		else f[a[i]]=1;
		fk[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			while(to[j]!=j) j=to[j];
			ans[a[j]]++;
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return 0;
}

