#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,p[500005],b[500005],a[500005],f[500005],ans[500005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(p[a[i]]){
			b[p[a[i]]]=i;
		}
		p[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		f[i]++;
		if(b[i]){
			f[b[i]]+=f[i];
		}
		else{
			f[i+1]+=f[i];
			ans[a[i]]+=f[i];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
} 