#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[500005],b[300005],c[500005],d[500005],ans[300005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=n;i>=1;i--){
		c[i]=b[a[i]];
		b[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		d[i]++;
		if(c[i]){
			d[c[i]]+=d[i];
		}else{
			ans[a[i]]+=d[i];
			d[i+1]+=d[i];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}//rp++