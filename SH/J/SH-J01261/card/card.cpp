#include<bits/stdc++.h>
using namespace std;

const int N = 5e5+5;
const int M = 3e5+5;
int a[N];
int game[N];
int ans[M];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	for(int i = 1; i <= n; i++) {
		for(int j = i; j <= n; j++) {
			bool flag = 1;
			for(int k = 1; k <= j; k++) {
				if(!game[k])break;
				if(!flag) {
					game[k] = 0;
					continue;
				}
				if(game[k] == j) {
					flag = 0;
				}
				if(k == j){
					game[k+1] = j;
				}
			}
		}
		for(int j = 1; j <= n; j++) {
			ans[game[j]]++;
		}
		for(int j = 1; j <= n; j++) {
			game[j] = 0;
		}
	}

	for(int i = 1; i <= m; i++) {
		cout << ans[i] << " ";
	}

	return 0;
}

