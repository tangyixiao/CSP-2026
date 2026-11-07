#include<bits/stdc++.h>
using namespace std;
const int Max=2e5+5;
int n,m;
int a[Max];
int maxx=-0x3f3f3f3f;
void dfs (int root , int d , int cnt) {
	if(d==m){
		maxx=max(maxx,cnt);
		cout<<cnt<<endl;
		return ;
	}
	if(root==n+1){
		return ;
	}
	dfs(root+1,d,cnt);
	if(d==0){
		dfs(root+1,d+1,a[root]);
	}
	else {
		dfs(root+1,d+1,(cnt&a[root]));
	}
	return ;
}
int main () {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n<=20){
		dfs(1,0,0);
	}
	else if(m==1){
		for(int i=1;i<=n;i++){
			maxx=max(maxx,a[i]);
		}
	}
	else if(m==n){
		for(int i=1;i<=n;i++){
			maxx=(maxx&a[i]);
		}
	}
	else if(m==n-1){
		for(int i=1;i<=n;i++){
			int t=-0x3f3f3f3f;
			for(int j=1;j<=n;j++){
				if(j==i){
					continue;
				}
				t=(a[j]&t);
			}
			maxx=max(maxx,t);
		}
	}
	else {
		for(int i=1;i<=n;i++){
			maxx=max(maxx,a[i]);
		}
	}
	cout<<maxx;
	return 0;
}