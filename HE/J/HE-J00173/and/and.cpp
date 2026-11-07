#include <bits/stdc++.h>
using namespace std;
const long long N=2010;
bool cmp(long long x,long long y){
	return x>y;
}
long long n,m,bj1,bj2,len,ans;
long long a[N];
string s[N];
void dfs(long long x,long long y,long long sum){
	if(x==n+1){
		if(y==m) ans=max(sum,ans);
		return;
	}
	if(y<m){
		if(sum==0) dfs(x+1,y+1,a[x]);
		else dfs(x+1,y+1,sum&a[x]);
	}
	dfs(x+1,y,sum);
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i=i+1) cin>>a[i];
	if(m==1){
		sort(a+1,a+1+n,cmp);
		cout<<a[1]<<endl;
		return 0;
	}
	if(m==n){
		long long ans1=a[1];
		for(int i=2;i<=n;i=i+1) ans1=ans1&a[i];
		cout<<ans1<<endl;
		return 0;
	}
	for(int i=1;i<=n;i=i+1){
		long long x=a[i];
		while(x!=0){
			long long c=x%2;
			x=x/2;
			if(c==0){
				bj1=1;
				break;
			}
		}
		if(bj1==1) break;
	}
	if(bj1==0){
		sort(a+1,a+1+n,cmp);
		ans=a[1];
		for(int i=2;i<=m;i=i+1){
			ans=ans&a[i];
		}
		cout<<ans<<endl;
		return 0;
	}
	dfs(1,0,0);
	cout<<ans<<endl;
	return 0;
}
