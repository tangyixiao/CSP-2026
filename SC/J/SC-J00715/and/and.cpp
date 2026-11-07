#include<bits/stdc++.h>
using namespace std;
int n,m,a[200009],maxx;
void dfs(int s,int u,int h){
	if(s==m)maxx=max(maxx,h);
	for(int i=u;i<=n;i++){
		dfs(s+1,i+1,h&a[i]);
	}
}
int main(){
//	ios::sync_with_stdio(0);
//	cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	if(m==n){
		for(int i=2;i<=n;i++)a[1]&=a[i];
		cout<<a[1];
	}else if(m==1){
		for(int i=1;i<=n;i++)maxx=max(maxx,a[i]);
		cout<<maxx;
	}else if(n<=2000){
		for(int i=1;i<=n;i++)dfs(1,i+1,a[i]);
		cout<<maxx;
	}else{
		sort(a+1,a+1+n);
		cout<<a[n-m+1];
	}
	return 0;
} 