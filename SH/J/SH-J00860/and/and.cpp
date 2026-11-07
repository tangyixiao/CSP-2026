#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int> a;
int n,m,ans;
void dfs(int step,int num,int sum){
	if(step==n||num==m){
		if(num!=m){
			
		}else{
			ans=max(ans,sum);
		}
	}else{
		dfs(step+1,num+1,sum&a[step]);
		dfs(step+1,num,sum);
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	a.resize(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	dfs(0,0,-1);
	cout<<ans;
	return 0;
}
