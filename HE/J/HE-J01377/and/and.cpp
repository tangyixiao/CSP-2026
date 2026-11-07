#include<bits/stdc++.h>
using namespace std;
long long a[200010];
long long ans=0;
long long n,m;
long long t=1024;
long long b[200010],id=1;
void dfs(long long x,long long cnt){
	if(x==n+1){
		return ;
	}
	if(cnt==m){
		long long d=a[1];
		for(int i=2;i<=m;i++){
			d&=a[i];
		}
		ans=max(d,ans);
		return ;
	}
	b[id]=a[x];
	id++;
	dfs(x+1,cnt+1);
	b[id]=0;
	id--;
	dfs(x+1,cnt);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	long long ma=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ma=max(ma,a[i]);
	}
	long long u=a[1];
	for(int i=2;i<=n;i++){
		u&=a[i];
	}
	if(n<=20){
		dfs(1,0);
		cout<<ans;
	}
	if(m==1){
		cout<<ma;
	}
	if(m==n){
		cout<<u;
	} 
	if(m==2){
		long long ans=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
