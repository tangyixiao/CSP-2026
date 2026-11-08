#include<bits/stdc++.h>
using namespace std;
const int N=2e5+7;
int a[N],b[30][N];
int mx=-1;
int n,m;
//t2被刺我，god t3不是st表能直接做的，只能暴力枚举了 预计得分50 
int st[N];
void dfs(int u){
	if(u==n+1){
		int all_and=0;
		int cnt=0;
		for(int i=1;i<=n;i++){
			if(st[i]){	
				//cout<<i<<' ';
				cnt++;
				if(all_and==0) all_and=a[i];
				else all_and=all_and&a[i];
			}
		}
		//cout<<'\n';
		if(cnt==m) mx=max(mx,all_and);
		return ;
	}
	st[u]=1;
	dfs(u+1);
	st[u]=0;
	dfs(u+1);
	return ;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin>>n>>m;
	int maxn=-1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxn=max(maxn,a[i]);
	}
	if(m==1){
		cout<<maxn;
		return 0;
	}
	if(m==2){
		int maxx=-1;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				maxx=max(maxx,a[i]&a[j]);
			}
		}
		cout<<maxx;
		return 0;
	}
	if(m==n){
		int ans=a[1];
		for(int i=2;i<=n;i++){
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	if(m==n-1){
		int ans=a[1];
		for(int i=2;i<=n;i++){
			ans&=a[i];
		}
		int maxx=-1;
		for(int i=1;i<=n;i++){
			maxx=max(maxx,ans&(~a[i]));
		}
		cout<<maxx;
		return 0;
	} 
	if(n<=20){
		dfs(1);
		cout<<mx;
		return 0;
	}
	for(int i=1;i<=n;i++) b[0][i]=a[i];
	int ans=-1;
	int len=log2(n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-(1<<(i-1));j++){
			b[i][j]=b[i-1][j]&b[i-1][j+(1<<(i-1))];
		}
	}
	len=log2(m);
	for(int i=1;i<=n;i++){
		if(i+m-1>n) break;
		//cout<<(a[len][i]&a[len][i+m-1-(1<<len)+1])<<' ';
		ans=max(ans,b[len][i]&b[len][i+m-1-(1<<len)+1]);
	}
	cout<<ans;
	return 0;
} 
/*
4 2
3 15 12 12
5 3
31 3 1 15 7

*/
