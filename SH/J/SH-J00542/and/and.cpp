#include<bits/stdc++.h>
using namespace std;
int a[200010];
int n,m,maxa;
void dfs(int sum,int step,int la){
	if(step==m){
		maxa=max(sum,maxa);
		return;
	}
	for(int i=la+1;i<=n;i++){
		if(step==0) dfs(a[i],step+1,i);
		else dfs(sum&a[i],step+1,i);
	}
}
void solveto(){
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			maxa=max(maxa,a[i]&a[j]);
		}
	}
}
void solve(){
	for(int i=1;i<=n;i++){
		maxa=max(maxa,a[i]);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n<=20)dfs(0,0,0);
	else if(m==1) solve();
	else if(m==2) solveto();
	cout<<maxa;
	return 0;
}
/*
0011
1111
1100
1100
*/
