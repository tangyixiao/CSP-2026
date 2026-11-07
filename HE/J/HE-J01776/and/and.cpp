#include<bits/stdc++.h>
using namespace std;
int n,m,maxn;
int a[200005];
void dfs(int now,int step,int cnt){
	if(step==m){
		maxn=max(cnt,maxn);
		return;
	}
	for(int i=now+1;i<=n-m+step+1;i++){
		dfs(i,step+1,cnt&a[i]);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n-m+1;i++){
		dfs(i,1,a[i]);
	}cout<<maxn;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
