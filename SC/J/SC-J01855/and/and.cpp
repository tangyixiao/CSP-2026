#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int n,m,ans;
int a[200005];
vector<int> s;
void dfs(int st,int v,int k){
	if(st>n+1)return;
	if(k==m){
		ans=max(ans,v);
	}else{
		if(k==0){
			s.push_back(st);
			dfs(st+1,a[st],k+1);
			s.pop_back();
			dfs(st+1,0,k);
		} else{
			s.push_back(st);
			dfs(st+1,v&a[st],k+1);
			s.pop_back();
			dfs(st+1,v,k);
		}
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n<=20){
		dfs(1,0,0);
		cout<<ans;
	}else if(m==1){
		for(int i=1;i<=n;i++){
			ans=max(ans,a[i]);
		}
		cout<<ans;
	}else if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans=ans&a[i];
		}
		cout<<ans;
	}else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(j!=i){
					ans=max(ans,a[i]&a[j]);
				}
			}
		}
		cout<<ans;
	}else{
		sort(a+1,a+n+1);
		ans=a[n];
		for(int i=1;i<=m;i++){
			ans=ans&a[n-i+1];
		}
		cout<<ans;
	}
	return 0;
} 