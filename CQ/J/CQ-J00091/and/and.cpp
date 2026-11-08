#include<bits/stdc++.h>
#define int long long
using namespace std;
const int MAXN=2e5+5;
int n,m,a[MAXN],f[MAXN],ans=-1e9;
signed main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	memset(f,0xcf,sizeof(f));
	f[0]=0;
	for(int i=1;i<=m;i++){
		for(int j=n;j>=1;j--){
			f[j]=max(f[j],f[j-1]&a[j]);
		}
	}
	cout<<f[n];
	return 0;
}

