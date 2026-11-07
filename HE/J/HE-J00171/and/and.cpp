#include <bits/stdc++.h>
using namespace std;
long long n,m,ans=0;
const int N=1e5+10;
long long a[N];
void dfs(int index,long long cnt,int flag,int nw){
	if(index==m+1){
		ans=max(cnt,ans);
		return;
	}
	if(nw>n){
		return;
	}
	if(!flag&&n-nw<m){
		return;
	}
	else if(!flag){
		dfs(index+1,a[nw],1,nw+1);
		dfs(index,0,0,nw+1);
	}else{
		dfs(index+1,cnt&a[nw],1,nw+1);
		dfs(index,cnt,1,nw+1);
	}
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	long long maxn=0;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>maxn){
			maxn=a[i];
		}
	}
	if(m==1){
		cout<<maxn;
		return 0; 
	}
	dfs(1,0,0,1);
	cout<<ans;
	return 0;
} 
