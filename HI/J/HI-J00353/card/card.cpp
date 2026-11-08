#include <bits/stdc++.h>
using namespace std;
long long n, m;
long long a[1000005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	int t[m+1] = {0};
	for (int i = 1; i <= n; i++) {
		cin >> a[i];//µãÊý 
	}
	vector<int> x;
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			if (x.size()) {
				for (int k = 0; k < x.size(); k++) {
					if (x[k] == a[j]) {
						while (x.size() > k) {
							x.pop_back();
						}
					}
				}
			}
			x.push_back(a[j]);
		}
		for (int j = 0; j < x.size(); j++) {
			t[x[j]]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << t[i] << " ";
	}
	return 0;
}

