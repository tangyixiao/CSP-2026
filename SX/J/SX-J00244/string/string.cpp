#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
struct Edge{
	int a;
	char c;
} edge[200005];
int sum;
signed main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> edge[i].a;
		cin >> edge[i].c;
	}
	int l = 1, r = n;
	while (l < r){
		if (edge[l].a == edge[r].a){
			if (edge[l].c != edge[r].c){
				sum += edge[l].a;
			}
			l++;
			r--;
		}
		else if (edge[l].a > edge[r].a){
			edge[l].a -= edge[r].a;
			if (edge[l].c != edge[r].c) sum += edge[r].a;
			r--;
		}
		else {
			edge[r].a -= edge[l].a;
			if (edge[l].c != edge[r].c) sum += edge[l].a;
			l++;
		}
	}
	cout << sum;
	return 0;
}