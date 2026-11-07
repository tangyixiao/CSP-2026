#include<bits/stdc++.h>
#define N 1000200
#define S 3000
#define int long long
using namespace std;
int n,m,a[N],maxn=INT_MIN,cnt;
bool cmp(int a,int b){
	return a>b;
}
bool vis[N];
void dfs(int step,int maxn){
	cnt=0;
	if(step==m){
		cnt=a[1];
		for(int i=2;i<=m;i++){
			cnt=cnt&&a[i];
		}
	}
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			vis[i]=true;
			a[step]=a[i];
			vis[i]=false;
			dfs(step+1,max(maxn,cnt));
		}
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	dfs(0,maxn);
	cout<<maxn;
	return 0;
}
