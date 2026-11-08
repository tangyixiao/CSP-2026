#include<bits/stdc++.h>
using namespace std;

const int N = 500010, M = 300010;
int n, m, a[N], p[M], q[M];
vector<int> s[M];

int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%d%d", &n, &m);
	bool f = 1;
	for(int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
		if(a[i] - 1 != a[i - 1]) f = 0;
		s[a[i]].push_back(i);
	}
	if(f) for(int i = 1; i <= m; i++) printf("%d ", a[i]);
	for(int i = 1; i <= m; i++) q[i] = s[i].size() - 1;
	for(int i = 1; i <= n; i++){
		int j = i;
		while(j <= n)
			if(j < s[a[j]][q[a[j]]])
				j = s[a[j]][q[a[j]]];
			else p[a[j]]++, j++;
	}
	for(int i = 1; i <= m; i++)
		printf("%d ", p[i]);
	return 0;
}
