#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long n,m,a[N],box[N],sum,vis[N];
void dfs(int pos){
	if(pos>m){
		long long ans=box[1];
		for(int i=2;i<=m;i++){
			ans=(ans&box[i]);
		}
		sum=max(sum,ans);
		return ;
	}
	for(int i=1;i<=n && vis[i]==0;i++){
		box[pos]=a[i];
		vis[i]=1;
		dfs(pos+1);
		vis[i]=0;
	}
	return ;
}
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	dfs(1);
	cout<<sum;
	return 0;
}
