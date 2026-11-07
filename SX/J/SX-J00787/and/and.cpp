#include <bits/stdc++.h>
using namespace std;
int n,m,ma=0;
int a[2000010];
int dfs(int i,int s){
	if(i==m){
		return a[s];
	}
	int ama=0;
	for(int j=s+1;j<=n;j++){
		ama=max(ama,a[s]&dfs(i+1,j));//cout<<i<<" "<<s<<" "<<j<<" "<<ama<<"\n";
	}
	return ama;
}
int main() {
	freopen("and.in","r",stdin);freopen("and.out","w",stdout);
	cin>>n>>m;for(int i=1;i<=n;i++){cin>>a[i];}
	for(int i=1;i<=n-m+1;i++){
		ma=max(ma,dfs(1,i));
	}
	cout<<ma;
	return 0;
}
