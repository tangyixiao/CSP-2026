#include<bits/stdc++.h>
using namespace std;
long long n, m;
long long a[500005];
long long lis[5005];
long long ans[300005];
vector<long long> s;
int main(){
	ios::sync_with_stdio(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (long long i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (long long i = 1; i <= n; i++) {
		for (long long j = 0; j <= m; j++) {
			lis[j] = -1;
		}
		for (long long j = i; j <= n; j++) {
//			cout << j << " " << lis[a[j]] << " " << s.size() << endl;
			if (lis[a[j]] > -1) {
				s.erase(s.begin() + lis[a[j]], s.end());
				s.push_back(a[j]);
				lis[a[j]] = s.size() - 1;
			} else {
				s.push_back(a[j]);
				lis[a[j]] = s.size() - 1;
			}
		}
//		for (long long r = 0; r < s.size(); r++) {
//			cout << s[r] << " ";
//		}
//		cout << endl;
		for (long long j = 0; j < s.size(); j++) {
			ans[s[j]]++;
		}
		s.clear();
	}
	for (long long i = 1; i <= m; i++) {
		cout << ans[i] << " ";
	}
	return 0;
}

