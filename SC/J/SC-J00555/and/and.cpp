#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200005],p[200005],ans,maxn;
void dfs(int last,int x){
	if(x==m){
		int s=p[1];
		for(int i=2;i<=m;i++)s&=p[i];
		ans=max(ans,s);
		return;
	}
	if(last==n)return;
	for(int i=last+1;i<=n;i++){
		p[x+1]=a[i];
		dfs(i,x+1);
	}
	return;
}
bool cmp(int x,int y){return x>y;}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)scanf("%d",a+i),maxn=max(maxn,a[i]);
	if(n<=20){
		dfs(0,0);
		cout<<ans;
		return 0;
	}
	if(n<=2000){
		if(m==1){
			for(int i=1;i<=n;i++)ans=max(ans,a[i]);
			cout<<ans;
		}
		if(m==n){
			ans=a[1];
			for(int i=2;i<=n;i++)ans&=a[i];
			cout<<ans;
		}
		if(m==2){
			for(int i=1;i<=n;i++)
				for(int j=1;j<i;j++)ans=max(ans,a[i]&a[j]);
			cout<<ans;
		}
		return 0;
	}
	sort(a+1,a+1+n,cmp);
	ans=a[1];
	for(int i=2;i<=m;i++)ans&=a[i];
	cout<<ans;
	return 0;
}