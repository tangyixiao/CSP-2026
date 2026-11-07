#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[200010],ans,c[200010][40],opt[200010],maxn,vis[200010];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)  cin>>a[i];
	for(int i=1;i<=n;i++){
		int t=a[i];
		while(t)  c[i][++opt[i]]=t%2,t/=2;
		maxn=max(maxn,opt[i]);
	}
	for(int i=maxn;i>=1;i--){
		int sum=0;
		for(int j=1;j<=n;j++){
			if(c[j][i]==1&&!vis[j])  sum++;
		}
		if(sum<m)  continue;
		else{
			for(int j=1;j<=n;j++){
				if(c[j][i]==0)  vis[j]=1;
			}
			int mul=1;
			for(int j=1;j<i;j++)  mul*=2;
			ans+=mul;
		}
	}
	cout<<ans;
	return 0;
}
