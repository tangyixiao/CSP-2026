#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=2e5+5;
ll n,m,ans,maxn,s;
ll a[N];
void dfs(int x,int cnt,ll sum){
	if(cnt==m){
		ans=max(ans,sum);
		return;
	}
	if(x>n) return;
	if(cnt==0&&sum==0) dfs(x+1,cnt+1,a[x]);
	else dfs(x+1,cnt+1,(sum&a[x]));
	dfs(x+1,cnt,sum);
}
bool cmp(int a,int b){return a>b;}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		maxn=max(maxn,a[i]);
		if(i==1) s=a[1];
		else s=(s&a[i]);
	}
	if(m==1){
		cout<<maxn;
		return 0;
	}
	if(m==n){
		cout<<s;
		return 0;
	}
	sort(a+1,a+1+n,cmp);
	if(n>=10000){
		for(int i=1;i<=m;i++){
			if(i==1) ans=a[i];
			else if((ans&a[i])==0){m++;continue;}
			else ans=(ans&a[i]);
		}
		cout<<ans;
		return 0;
	}
	dfs(1,0,0);
	cout<<ans;
	return 0;
}