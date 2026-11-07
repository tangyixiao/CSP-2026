#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n; cin >> n;
	vector<pair<long long, char>> a(n);
	for (int i = 0; i < n; i++){
		cin >> a[i].first >> a[i].second;
	}
	int left = 0, right = n-1;
	long long ans = 0;
	while (left < right){
		if (a[left].first == a[right].first){
			if (a[left].second != a[right].second){
				ans += a[left].first;
			}
			a[left].first = a[right].first = 0;
			left++, right--;
		} else if (a[left].first > a[right].first){
			if (a[left].second != a[right].second){
				ans += a[right].first;
			} 
			a[left].first -= a[right].first;
			a[right].first = 0; right--;
		} else if (a[left].first < a[right].first){
			if (a[left].second != a[right].second){
				ans += a[left].first;
			}
			a[right].first -= a[left].first;
			a[left].first = 0; left++; 
		}
	}
	cout << ans;
	return 0;
}