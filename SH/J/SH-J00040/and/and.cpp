#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int n,m,maxv = 0;
int a[N];
void dfs(int idx,int cnt,int sum){
	if(idx > n){
		return;
	} 
	if(cnt == m){
		maxv = max(maxv,sum);
		return;
	}
	for(int i = idx;i < n;i++){
		dfs(i + 1,cnt + 1,sum & a[i + 1]);
	}
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>> n >> m;
	for(int i = 1;i <= n;i++){
		cin>> a[i];
	}
	for(int i = 1;i <= n;i++){
		dfs(i,1,a[i]);
	}
	cout<< maxv;
	return 0;
}
