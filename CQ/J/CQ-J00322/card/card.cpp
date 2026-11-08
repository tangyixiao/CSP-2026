#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e5+5,M=3e5+5;
int n,m,a[N],f[N],ans[M];
vector<int> g[M];
void solve(int x){
	for(int i=x;i<=n;i++){
		if(f[i]!=i){
			i=f[i];
			ans[a[i]]++;
		}else {
			ans[a[i]]++;
		}
	}
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) {
		cin>>a[i];
		g[a[i]].push_back(i);
	}
	for(int i=1;i<=n;i++){
		f[i]=g[a[i]][g[a[i]].size()-1];
	}
	for(int i=1;i<=n;i++) solve(i);
	for(int i=1;i<=m;i++) cout<<ans[i]<<" "; 
	return 0;
}
/*
4 3
1 2 1 3

10 3
3 1 2 1 3 2 3 1 2 1
*/ 
