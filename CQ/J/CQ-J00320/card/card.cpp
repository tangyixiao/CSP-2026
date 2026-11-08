#include<bits/stdc++.h>
using namespace std;
using lint=long long;
using llint=__int128;
using ldouble=long double;
const int MAX_N=5e5+10,INF=1e9;
int a[MAX_N];
int mp[MAX_N];
int last[MAX_N];
int n,m;
bool check1(){
	for(int i=2;i<=n;i++){
		if(a[i]<a[i-1]) return false;
	}
	return true;
}
	int ans[MAX_N];
int vis[MAX_N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(check1()){
		for(int i=1;i<=n;i++) mp[a[i]]=i;
		for(int i=1;i<=m;i++) cout<<mp[i]<<" ";
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++) vis[j]=1;
		for(int int j=i;j<=n;j++){
			if(last[a[j]]>=i){
				for(int k=last[a[j]];k<=j-1;k++) vis[k]=1;
				last[a[j]]=i;
			}
		}
		for(int j=i;j<=n;j++){
			if(!vis[j])  ans[a[j]]++;
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[a[j]]<<" ";
	return 0;
}

