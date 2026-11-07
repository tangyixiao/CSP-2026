#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],flag[200005];
int dfs(int x){
	if(x == 1){
		flag[n - 1] = 1;
		return a[n - 1];
	}
	int maxn = 0,maxid,pre = dfs(x - 1);
	for(int i = 0;i < n;i++){
		if(flag[i] != 1 && (a[i] & pre) > maxn){
			maxn = a[i] & pre;
			maxid = i;
		}
	}
	flag[maxid] = 1;
	return maxn;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a + n);
	cout << dfs(m);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
