#include <bits/stdc++.h>
using namespace std;
const int N = 200001;
long long n, m, a[N], ans;
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	ans = n / 2;
	sort(a + 1, a + n + 1);
	cout << a[ans];
}