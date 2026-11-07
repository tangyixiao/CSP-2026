#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m;
	cin >> n >> m;
	vector<int> a(n+1);
	vector<int> key(m+1, -1);
	for(int i=1;i<=n;++i){
		cin >> a[i];
		key[a[i]]=i;
	}
	vector<int> ans(m+1, 0);
	for(int i=1;i<=n;++i){
		for(int j=i;j<=n;++j){
			int val=a[j];
			int p=key[a[j]];
			if(p==-1){
				ans[a[j]]++;
				continue;
			}
			ans[a[j]]++;
			j=p;
		}
	}
	for(int i=1;i<=m;++i){
		cout << ans[i] << " ";
	}
	return 0;
}
/*
4 3
1 2 1 3

10 3
3 1 2 1 3 2 3 1 2 1
*/