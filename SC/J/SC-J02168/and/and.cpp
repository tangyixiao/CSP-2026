#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int x[101];
int a[200005],f[200005];
int ans,t=-1;
void dfs(int x,int t){
	if(x==m+1){
		ans=max(ans,t);
		return ;
	}
	for(int i=1;i<=n;i++){
		if(f[i]==0){
			f[i]=1;
			dfs(i+1,t&a[i]);
			f[i]=0;
		}
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
//	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	x[1]=1;
	for(int i=2;i<=20;i++){
		x[i]=x[i-1]*2;
	}
	int bj=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]!=i-1) bj=1;
	}
	if(m==1){
		sort(a+1,a+n+1);
		cout<<a[n];
	}else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			} 
		}
		cout<<ans;
	}else if(m==n){
		ans=a[1];
		for(int i=1;i<=n;i++){
			ans=ans&a[i];
		}
		cout<<ans;
	}else if(m==n-1){
		sort(a+1,a+n+1);
		for(int i=2;i<=n;i++){
			ans=ans&a[i];
		}
		cout<<ans;
	}else if(bj==0){
		for(int i=1;i<=20;i++){
			if(x[i]==n){
				cout<<x[i-m]-1;
				break;
			}
		}
	}else{
		for(int i=1;i<=n;i++){
			f[i]=1;
			dfs(1,a[i]);
			f[i]=0;
		}
		cout<<ans;
	}
	return 0;
} 
/*

35%

4 2
3 15 12 12

5 3
31 3 1 15 7


*/