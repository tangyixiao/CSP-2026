#include<bits/stdc++.h>
#include<cstdio>
#define int long long
#define endl '\n'
using namespace std;
int sz[500005],sl[300005],ans[300005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>sz[i];
		sl[sz[i]]=i;
	}
	int j=0;
	for(int i=1;i<=n;i++){
		for(j=i;j<=n;){
			ans[sz[j]]++;
			j=sl[sz[j]]+1;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}