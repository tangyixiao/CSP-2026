#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int a[200005],len;
int P[200005];
int dfs(int p){
	if(p==-1) return 0;
	int nlen=0;
	for(int i=1;i<=len;i++) if(((a[i]>>p)&1)==1) P[++nlen]=a[i];
	if(nlen<m) return dfs(p-1);
	for(int i=1;i<=nlen;i++) a[i]=P[i];
	len=nlen;
	return (1ll<<p)+dfs(p-1); 
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m,len=n;
	for(int i=1;i<=n;i++) cin>>a[i];
	cout<<dfs(31)<<'\n';
	return 0;
}
