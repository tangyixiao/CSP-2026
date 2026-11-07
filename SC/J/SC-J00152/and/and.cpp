#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
namespace my{
	const int maxn=2e5+5;
	int n,m;
	ll ans=0;
	ll a[maxn];
	bool used[maxn];
	void dfs(int step,ll value){
		if(step>=m){
			ans=max(ans,value);
			return ;
		}
		for(int i=0;i<n;i++){
			if(!used[a[i]]){
				used[a[i]]=1;
				dfs(step+1,value&a[i]);
			}
		}
	}
	int main(){
		freopen("and.in","r",stdin);
		freopen("and.out","w",stdout);
		cin>>n>>m;
		for(int i=0;i<n;i++)
			cin>>a[i];
		if(m==1){
			ll ans=0;
			for(int i=0;i<n;i++)
				ans=max(ans,a[i]);
			cout<<ans;
		}else if(m==n){
			ll ans=a[0]&a[1];
			for(int i=2;i<n;i++)
				ans&=a[i];
			cout<<ans;
		}
		for(int i=0;i<n;i++){
			dfs(0ll,a[i]);
			memset(used,0,sizeof(used));
			used[a[i]]=1;
		}
		cout<<ans;
		return 0;
	}
}
int main(){
	my::main();
	return 0;
}