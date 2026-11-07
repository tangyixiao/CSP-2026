#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll n,m,a[200005],mx=0,mxx=0;
void dfs(ll id,ll cnt,ll gg){
	if(cnt==m){
		mxx=max(mxx,gg);
		return;
	}if(id==n+1)return;
	dfs(id+1,cnt+1,gg&a[id]);
	dfs(id+1,cnt,gg);
}int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m>>a[1];
	ll g=a[1];
	for(int i=2;i<=n;i++){
		cin>>a[i];
		g&=a[i];
		mx=max(mx,a[i]);
	}if(n<=20){
		for(int i=1;i<=n;i++)dfs(i+1,1,a[i]);
		cout<<mxx;
		return 0;
	}if(m==1){
		cout<<mx;
		return 0;
	}if(m==n){
		cout<<g;
		return 0;
	}if(m==2){
		ll mxxx=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++)mxxx=max(mxxx,a[i]&a[j]);
		}cout<<mxxx;
		return 0;
	}if(m==n-1){
		ll mxxx=0;
		for(int i=1;i<=n;i++){
			ll gg;
			if(i==1)gg=a[2];
			else gg=a[1];
			for(int j=1;j<=n;j++){
				if(j==i)continue;
				gg&=a[j];
			}mxxx=max(mxxx,gg);
		}cout<<mxxx;
		return 0;
	}sort(a+1,a+1+n);
	cout<<a[n-m+1];
}
