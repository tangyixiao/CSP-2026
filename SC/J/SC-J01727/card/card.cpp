#include <bits/stdc++.h>
using namespace std;
int read(){
	int res = 0;
	char ch = getchar();
	while (ch < '0' || ch > '9') ch = getchar();
	while (ch >= '0' && ch <= '9'){
		res = res * 10 + ch - '0';
		ch = getchar();
	}
	return res;
}
int n;
int m;
int a[1000005];
int id[1000005];
int rid[1000005];
int ans[1000005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	n = read();
	m = read();
	for (int i = 1;i <= n;i++){
		a[i] = read();
	}
	for (int i = 1;i <= n;i++){
		int nowid = 0;
		for (int j = 1;j <= n;j++){
			id[a[j]] = 0;
		}
		for (int j = i;j <= n;j++){
			if (id[a[j]] == 0) {
				id[a[j]] = ++nowid;
				rid[nowid] = a[j];
			}
			else {
				for (int k = id[a[j]]+1;k <= nowid;k++){
					id[rid[k]] = 0;
					rid[k] = 0;
				}
				nowid = id[a[j]];
			}
		}
		for (int j = 1;j <= m;j++){
			if (id[j] != 0) ans[j]++;
		}
	}
	for (int i = 1;i <= m;i++){
		printf("%d ",ans[i]);
	}
	return 0;
}