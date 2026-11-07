#include<bits/stdc++.h>
using namespace std;
int n;
int m;
long long a[200005];
bool check[200005];
long long bag[200005];
long long ans=0;
void dfs(int k){
	if(k==m+1){
		long long num=bag[1];
		for(int i=2;i<=m;i++){
			num&=bag[i];
		}
		ans=max(ans,num);
	}
	for(int i=1;i<=n;i++){
		if(check[i]==0){
			check[i]=1;
			bag[k]=a[i];
			dfs(k+1);
			check[i]=0;
		}
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dfs(1);
	cout<<ans;
	return 0;
}