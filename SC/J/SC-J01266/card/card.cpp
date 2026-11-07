#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=5e5+5,M=3e5+5;
int n,m,a[N],nex[N],c[M],ans[M];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=n;i>=1;i--){
		if(!c[a[i]]) nex[i]=i+1,c[a[i]]=i;
		else nex[i]=c[a[i]];
	}
	for(int i=1;i<=n;i++){
		int l=i;
		while(l<=n){
			if(a[nex[l]]!=a[l]) ans[a[l]]++;
			l=nex[l];
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
} 