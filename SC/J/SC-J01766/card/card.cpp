#include<bits/stdc++.h>
using namespace std;

int n, m;
int cards[500005];
int cnts[500005];
int ans[500005];

int main() {
	ios::sync_with_stdio(false), cin.tie(0);
	
	freopen("card.in","r",stdin);
  	freopen("card.out","w",stdout);
	
	cin >> n >> m;
	for(int i=1; i<=n; i++) {
		cin >> cards[i];
	}
	
	for(int i=n; i>0; i--) {
		cnts[cards[i]]++;
		for(int j=1; j<=m; j++) {
			if(cnts[j] % 2 == 1) {
				ans[j]++;
			}
		}
	}
	
	for(int i=1; i<=m; i++) {
		cout << ans[i] << ' ';
	}
	return 0;
}