#include <bits/stdc++.h>
using namespace std;
int card[500010];
int sum[300010] = {0};
int cnt[300010] = {0};
vector<int> pos[300010];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i = 1;i <= n;i++) {
		cin >> card[i];
		pos[card[i]].push_back(i);
	}
	for(int i = 1;i <= n;i++) {
		cnt[card[i]]++;
		for(int j = i;j <= n;) {
			int to = -1;
			for(int k = cnt[card[j]];k < pos[card[j]].size();k++) {
				if(pos[card[j]][k] > j) {
					to = pos[card[j]][k];
				}
			}
			if(to == -1) {
				sum[card[j]]++;
				j++;
			}
			else {
				j = to;
			}
		}
	}
	for(int i = 1;i <= m;i++) {
		cout << sum[i] << " ";
	}
	return 0;
}
