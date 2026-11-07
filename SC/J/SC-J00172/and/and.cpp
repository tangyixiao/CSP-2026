#include<bits/stdc++.h>

using namespace std;

const int MAXN = 200005;
int n, m, a[MAXN];
long long ans = -1;

void dfs(int i, int pos, long long val){
	if(i==m){
		if(val>ans) ans = val;
		return;
	}
	if((n-1-pos)<(m-i)) return;
	if(val<ans) return;
	for(int k=pos+1; k<n; k++){
		dfs(i+1, k, val&a[k]);
	}
}

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin>>n>>m;
	for(int i=0; i<n; i++) cin>>a[i];
	dfs(0, -1, pow(2, 31)-1);
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}