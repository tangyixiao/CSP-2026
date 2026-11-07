#include<bits/stdc++.h>
using namespace std;
#define int long long//1-12
int n,m;
int maxn=-1;
int a[201000];
int vis[201000];
void dfs(int k,int s){
	if(k>m){
		maxn=max(s,maxn);
		return ;
	}else {
		for(int i=1;i<=n;i++){
			if(!vis[i]){
				vis[i]=1;
				if(s==-1){
					dfs(k+1,(a[i]));
				}else{
					dfs(k+1,(s&a[i]));
				}
				
				vis[i]=0;
			}
		}
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		 for(int i=1;i<=n;i++){
			 maxn=max(a[i],maxn);
		 }
		cout<<maxn;
		return 0;
	}	
	if(m==n){
		int s=0;
		for(int i=1;i<=n;i++){
			s&=a[i];
		}
		cout<<s;
		return 0;
	}
	dfs(1,-1);
	cout<<maxn;
	return 0;
}