#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
long long a[MAXN];
int n,m,ans;
void dfs(int i,int f,int nans){
	if((i>n&&f<m)||f+(n-i+1)<m){
		return;
	}
	if(f==m){
		ans=max(nans,ans);
		return;
	}
	if(f==0){
		dfs(i+1,f,nans);
		dfs(i+1,f+1,a[i]);
		return;
	}
	else{
		dfs(i+1,f,nans);
		dfs(i+1,f+1,nans&a[i]);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	long long maxa=0,maqzh=int(2e30-1);
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maqzh&=a[i];
		maxa=max(maxa,a[i]);
	}
	if(m==n){
		cout<<maqzh<<'\n';
		return 0;
	}
	if(m==1){
		cout<<maxa<<'\n';
		return 0;
	}
	dfs(1,0,0);
	cout<<ans<<'\n';
	return 0;
}  
