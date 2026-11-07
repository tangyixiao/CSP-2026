#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
int a[N];int n,m;
int dfs(int i,int ind){
	if(i == m){
		return 2147483647;
	}
	int maxn = 0;
	for(int j = ind+1;j <= n-(m-i);j++){
		maxn = max(maxn,dfs(i+1,j)&a[j]);
	}
	return maxn;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin >> n >> m;
	for(int i = 0;i < n;i++) cin >> a[i];
	cout << dfs(0,-1);
	return 0;
}