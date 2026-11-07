#include <bits/stdc++.h>
#define int long long
using namespace std;
constexpr int N=2e5+7;
int a[N];
bool f[N];
int n,m;
int ans=0;
void dfs(int x,int sum,int cnt){
	if(cnt==m){
		if(sum>ans){
			ans=sum;
		}
		return;
	}
	for(int i=x+1;i<=n;i++){
		if(!f[N]){
			f[i]=1;
			if(sum==0) dfs(i,a[i],cnt+1);
			else dfs(i,sum&a[i],cnt+1);
		}
	}
}
int32_t main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin.tie(nullptr)->ios::sync_with_stdio(false);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		int ma=0;
		for(int i=1;i<=n;i++){
			ma=max(ma,a[i]);
		}
		cout<<ma;
	}else if(m==n){
		int sum=a[1];
		for(int i=2;i<=n;i++){
			sum=(sum&a[i]);
		}
		cout<<sum;
	}else if(n<=2000){
		dfs(0,0,0);
		cout<<ans;
	}else{
		sort(a+1,a+n+1,greater<int>());
		cout<<a[m];
	}
	return 0;
}
