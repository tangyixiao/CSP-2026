#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair <int, int>;
using veci = vector <int>;
using vecll = vector <long long>;
//void solve();

const int W = 30;
bool hv(int x, int i){
	return (x & (1 << (W - i + 1))) > 0;
}

bool cmp0(int x, int y){
	return x > y;
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	int n, m;
	cin >> n >> m;
	vector <int> A;
	for (int i = 0, x; i < n; i ++){
		cin >> x;
		A.push_back(x);
	}
	sort(A.begin(), A.end(), cmp0);

	int ans = 0;
	vector <int> B;
	for (int i = 1; i <= 31; i ++){
		B.clear();
		for (int j = 0; j < A.size(); j ++){
			if (hv(A[j], i)) B.push_back(A[j]);
		}
		if (B.size() >= m){
			ans += (1 << (W - i + 1));
			A = B;
		}
	}
	cout << ans << '\n';

	return 0;
}
