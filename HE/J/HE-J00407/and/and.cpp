#include<bits/stdc++.h>
#define long long int
using namespace std;
int n,m,a[100010];
int maxn(int c[100010],int k){
	int mx=-1;
	for(int i=1;i<=k;i++)
		mx=max(mx,c[i]);
	return mx;
}
int bl(int c[100010],int k){
	int mx=-1;
	for(int i=1;i<=k;i++){
		for(int j=i+1;j<=k;j++){
			mx=max(mx,c[i]&c[j]);
		}
	}
	return mx;
}
int he(int c[100010],int k){
	int res=c[1];
	for(int i=2;i<=k;i++)
		res&=c[i];
	return res;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(m==n) cout<<he(a,n);
	else if(m==1) cout<<maxn(a,n);
	else if(m==2) cout<<bl(a,n);
	return 0;
}
