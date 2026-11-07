#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5; 
int n,m,a[N],ans=-1;
void dg(int t,int s,int x){
	if(t==n+1){
		if(s==m)
			ans=max(ans,x);
		return ; 
	}
	dg(t+1,s,x);
	if(x==0) 
		dg(t+1,s+1,a[t]);
	else{
		x=x&a[t];
		dg(t+1,s+1,x);
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	dg(1,0,0);
	cout<<ans;
}
