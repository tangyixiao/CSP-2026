#include<bits/stdc++.h>
using namespace std;
void init(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
}
const int N=2e5+9;
int n,m,a[N];
void solve15(){
	int ans=-1;
	int f[30];
	for(int i=1;i<=(1<<(n-1))-1;i++){
		fill(f,f+29,0);
		for(int k=0;(1<<k)<=i;k++)
			if(((1<<k)&i)!=0)
				f[k]=1;
		int sum=0;
		for(int j=0;j<=24;j++)if(f[j])sum++;
		int cnt=(1<<25)-1;
		if(sum==m)
			for(int j=0;j<=24;j++)
				if(f[j])
					cnt=(cnt&a[j]);
		ans=max(ans,cnt);
	}
	cout<<ans;
}
void solve6(){
	int maxx=-1;
	for(int i=1;i<=n;i++){
		maxx=max(maxx,a[i]);
	}
	cout<<maxx;
}
void solve7(){
	int ans=(1<<30)-1;
	for(int i=1;i<=n;i++){
		ans=(ans&a[i]);
	}
	cout<<ans;
}
void solve810(){
	int maxx=-1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==j)continue;
			maxx=max(maxx,a[i]&a[j]);
		}
	}
	cout<<maxx;
}
int main(){
	init();
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	if(m==1)
		solve6();
	else if(m==n)
		solve7();
	else if(m==2)
		solve810();
	else
	    solve15();
	return 0;
}

