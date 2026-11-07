#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[200001];
int n,m;int maxn=INT_MIN;
int n2[32];int la=0;
void dfs(int st,int sum,int j){
	if(st==m){
		maxn=max(maxn,sum);return ;
	}
	for(int i=j;i<=n;i++){
		if(sum!=0){
			dfs(st+1,sum&a[i],i+1);
		}else if(sum==0&&st==1){
			dfs(st+1,a[i],i+1);
		}else{
			dfs(st+1,sum&a[i],i+1);
		}
	}
}//4 2  3 15 12 12 
signed main(){
    freopen("r","and.in",stdin);
	freopen("w","and.out",stdout);
	cin>>n>>m;
	bool A=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	n2[1]=1;
	for(int i=2;i<=31;i++){
		n2[i]=n2[i-1]*2;
	}
	for(int i=1;i<=n;i++){
		int u=1;
		for(int j=1;j<=31;j++){
			if(a[i]==n2[j]-1){
				u=0;break;
			}
		}
		if(u){
			A=0;break;
		} 
	}
	int ans=a[n];
	if(A){
		sort(a+1,a+1+n);
		for(int i=n-1;i>=n-m+1;i--){
			ans=ans&a[i];
		}
		cout<<ans;return 0;
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			maxn=max(maxn,a[i]);
		}
		cout<<maxn;return 0;
	}else if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans=ans&a[i];
		}
		cout<<ans;
		return 0;
	}else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				maxn=max(maxn,a[i]&a[j]);
			}
		}
		cout<<maxn;
	}else{
		dfs(0,0,1);
		cout<<maxn;
	}
	return 0;
}