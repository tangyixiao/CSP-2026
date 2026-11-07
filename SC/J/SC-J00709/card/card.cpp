#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[510000];
int v[510000],k[310000],ans[310000];
unordered_map<int,int> x;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		x.clear();
		memset(v,0,sizeof v);
		memset(k,0,sizeof k);
		for(int j=i;j<=n;j++){
			if(x[a[j]]!=0){
				for(int k=x[a[j]];k<j;k++){
					v[k]=1;
					x[a[k]]=0;
				}
			}
			x[a[j]]=j;
		}
		for(int j=i;j<=n;j++){
			if(v[j]==0) k[a[j]]=1;
		}
		for(int j=1;j<=m;j++){
			ans[j]+=k[j];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}