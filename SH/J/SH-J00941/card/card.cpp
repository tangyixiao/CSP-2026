#include <bits/stdc++.h>
using namespace std;

int n,m;

int a[200005];

int sa[200005];

bool vis[200005];

int find(int start, int end, int t) {
	for (int i = start; i <= end; i++) {
		if (a[i] == t && !vis[a[i]]) {
			return i;
		}
	}
	return -1;
} 

int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];	
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			vis[j] = false;
		}
		for (int j = 1; j < i; j++) vis[j] = true;
		for (int j = i; j <= n; j++) {
			if (find(i,j-1,a[j]) == -1) {
				continue;
			}
			for (int k = find(i,j-1,a[j]); k <= j-1; k++) {
				vis[k] = true;
			}
		}
		/*if (i == 1) {
			for (int k = 1; k <= n; k++) {
				cout << vis[k] << " ";
			}
		}*/
		for (int j = 1; j <= m; j++) {
			if (find(1,n,j) != -1) {
				sa[j]++;
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << sa[i] << " ";
	} 
	return 0;
}
