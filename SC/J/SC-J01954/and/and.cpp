#include <bits/stdc++.h>
using namespace std;
long long n,m,maxx=-1,maxn=-1,u;
long long a[200005];
long long work(long x,long y){
	if(x>y) swap(x,y);
	long long r=0,cnt=-1;
	while(x!=0){
		cnt++;
		if(x%2==1&&y%2==1){
			r+=pow(2,cnt);
		}
		x/=2;
		y/=2;
	}
	return r;
}
void dfs(long long x,long long r,long long g){
	if(x==m){
		maxx=max(maxx,r);
		return;
	}
	long long h=r;
	for(int j=g+1;j<=n-(m-x)+1;j++){
		r=work(r,a[j]);
		dfs(x+1,r,j);
		r=h;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxn=max(maxn,a[i]);
		u=work(u,a[i]);
	}
	if(m==n){
		cout<<u;
		return 0;
	}
	if(m==1){
		cout<<maxn;
		return 0;
	}
	if(m==2){
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				maxx=max(maxx,work(a[i],a[j]));
			}
		}
		cout<<maxx;
		return 0;
	}
	for(int i=1;i<=n-m+1;i++){
		dfs(1,a[i],i);
	}
	cout<<maxx;
	return 0;
}