#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e6;
int n,m,a[N];
bool tk=1,bk[N];
int f(int x){
	if(x==0) return INT_MAX;
	int mx=0;
	for(int i=1;i<=n;i++){
		if(bk[i]) continue;
		bk[i]=1;
		mx=max(mx,f(x-1)&a[i]);
		bk[i]=0;
	}
	return mx;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]!=i-1) tk=0;
	}
	if(tk){
		int x=0;
		for(int i=1;i<n-1;i=(i<<1)-1) x=i;
		cout<<x/2;
		return 0;
	}
	cout<<f(m);
	return 0;
}