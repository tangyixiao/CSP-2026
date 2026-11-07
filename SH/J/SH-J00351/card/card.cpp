#include <bits/stdc++.h>
using namespace std;
int n,m,a[500010],last[500010],dp[500010],f[500010];
vector<int> to[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i],last[a[i]]=i;
	for(int i=1;i<=n;i++){
		to[last[a[i]]].push_back(i);
	}
	for(int i=1;i<=n;i++){
		if(i==last[a[i]]){
			for(int j=0;j<to[i].size();j++){
				dp[i]+=dp[to[i][j]-1]+1;
			}
			f[a[i]]+=dp[i];
		}
	}
	for(int i=1;i<=m;i++)
		cout<<f[i]<<" ";
	return 0;
}
