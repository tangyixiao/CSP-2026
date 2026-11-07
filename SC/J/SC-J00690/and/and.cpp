#include<bits/stdc++.h>
using namespace std;
long long a[200010];
int b[200010];
int n, m;
long long maxx;
void dfs(int step, long long ans){
	if(step >= m){
		maxx = max(maxx,ans);
		return ;
	}
	for(int i = 1; i <= n; i++){
		if(!b[i]){
			b[i] = 1;
			dfs(step+1,ans&a[i]);
		}
	}
	return ;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	
	for(int i = 1; i <= n; i++){
		memset(b,0,sizeof(b));
		b[i] = 1;
		dfs(1,a[i]);
	}
	cout << maxx;
	return 0;
}