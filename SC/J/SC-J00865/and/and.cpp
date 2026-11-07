#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+50;
int n,m;
int x;
int maxn=-1;
int a[MAXN];
void dfs(int l,int ans,int r){
	if(r==m){
		maxn=max(maxn,ans);
		return;
	}
	for(int i=l+1;i<=n;i++){
		int q=ans;
		q&=a[i];
		dfs(i,q,r+1);
	}
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	if(m==1){
		cout<<a[n];
		return 0;
	}
	if(m==n){
		x=a[1];
		for(int i=2;i<=n;i++){
			x&=a[2];
		}
		cout<<x;
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				int o=a[i],p=a[j];
				o&=p;
				maxn=max(maxn,o);
			}
		}
		cout<<maxn;
		return 0;
	}
	if(m==n-1){
		maxn=a[2];
		for(int i=3;i<=n;i++){
			maxn^=a[i];
		}
		cout<<maxn;
		return 0;
	}
	if(n<=20){
		for(int i=1;i<=n;i++){
			dfs(i,a[i],1);
		}
		cout<<maxn;
		return 0;
	}
}