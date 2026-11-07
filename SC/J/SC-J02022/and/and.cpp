#include<bits/stdc++.h>
using namespace std;
const int M=2e5+10;
int n,m,a[M],tot[M],ans,l[M],r[M];
bool flag=1;
void dfs(int now=1073741823,int chose=0,int dep=1){
	if(chose+n-dep+1<m) return;
	if(chose>m) return;
	if(now<ans) return;
	if(dep==n+1){
		if(chose==m) ans=max(ans,now);
		return;
	}
	dfs(now&a[dep],chose+1,dep+1);
	dfs(now,chose,dep+1);
}
int power(int x,int k){
	int res=1,now=x;
	while(k){
		if(k&1) res*=now;
		now*=now;
		k>>=1;
	}
	return res;
}
bool check(int x){
	return power(2,int(log2(x)))==x;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		if(!check(a[i]+1)) flag=0;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}else if(n==m+1){
		l[0]=r[n+1]=1073741823;
		for(int i=1;i<=n;i++){
			l[i]=l[i-1]&a[i];
		}
		for(int i=n;i>=1;i--){
			r[i]=r[i+1]&a[i];
		}
		for(int i=1;i<=n;i++){
			ans=max(ans,l[i-1]&r[i+1]);
		}
		cout<<ans;
		return 0;
	}else if(flag){
		sort(a+1,a+1+n);
		cout<<a[n-m+1];
		return 0;
	}
	dfs();
	cout<<ans;
	return 0;
}
/*
4 2
3 15 12 12

5 3
31 3 1 15 7

*/