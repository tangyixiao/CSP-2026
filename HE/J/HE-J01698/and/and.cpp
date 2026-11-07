#include<bits/stdc++.h>
using namespace std;
long long n,m,num[200005],flag[200005],maxn=0;
void dfs(long long step){
	if (step==m){
		long long ans=0x7fffffff;
		for(int i=1;i<=n;i++){
			if (flag[i]==1){
				ans&=num[i];
			}
		}
		maxn=max(maxn,ans);
	}else{
		for(int i=1;i<=n;i++){
			if (flag[i]==0){
				flag[i]=1;
				dfs(step+1);
				flag[i]=0;
			}
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>num[i];
	}
	dfs(0);
	cout<<maxn;
	return 0;
}
