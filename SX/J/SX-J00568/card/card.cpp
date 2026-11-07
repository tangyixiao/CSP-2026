#include <bits/stdc++.h>
using namespace std;
int n,m,a[500005],ps[300005];
int nxt[500005],sz[500005];
bool ad[500005];
vector<int> prv[500005];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1;i <= n;i++)
		scanf("%d", &a[i]);
	for (int i = n;i >= 1;i--){
		if (ps[a[i]])
			nxt[i] = ps[a[i]],prv[ps[a[i]]].push_back(i);
		else ps[a[i]] = i,nxt[i] = i + 1,prv[i + 1].push_back(i),ad[i] = 1;
	}
	for (int i = 1;i <= n;i++){
		sz[i] = 1;
		for (int j : prv[i]) sz[i] += sz[j];
	}
	for (int i = 1;i <= m;i++) printf("%d%c", sz[ps[i]], " \n"[i == m]);
	return 0;
}
