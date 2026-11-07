#include <bits/stdc++.h>
using namespace std;

int n,m,a[500100] = {},cnt[300100] = {},cs[300100] = {};

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n>>m;
	for(int i = 1;i<=n;i++){
		cin >> a[i];
		cnt[a[i]] = i;
	}
	for(int j = 1;j<=n;j++){
		for(int i = j;i<=n;i++){
			i=cnt[a[i]];
			cs[a[i]]++;
		}
	}
	for(int i = 1;i<=m;i++){
		cout << cs[i] << " ";
	}
	return 0;
}

