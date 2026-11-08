#include <bits/stdc++.h>
using namespace std;
const int N=5e5+10,M=3e5+10;
int n,m;
int a[N];
int t[N],res[N],ans[M],x[M];
void solve(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		t[i]=x[a[i]];
		x[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		int c=0;
		for(int j=i+1;j<=n;j++){
			if(t[j]>=i) continue;
			else c+=res[t[j]];
		}
		res[i]=i-c;
	}
	for(int i=1;i<=n;i++) ans[a[i]]=max(ans[a[i]],res[i]);
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
}
int main(){

	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int T=1;
//	cin>>T;
	while(T--) solve();

	return 0;
}

