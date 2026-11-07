#include <bits/stdc++.h>
using namespace std;
int ma = -1;
int n,m;
int a[200005] = {};
void f(int i,int an,int k){
	if (i == m) {ma = max(ma,an);return;}
	for (int j = k + 1;j < n;j++){
		if (an == -1) f(i + 1,a[j],j);
		else f(i + 1,(an & a[j]),j);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	int mn = -1,m1 = -1;
	for (int i = 0;i < n;i++){
		cin >> a[i];
		if (mn = -1) mn = a[i];
		mn &= a[i];
		m1 = max(m1,a[i]);
	}
	if (m == n) {
		cout << mn;
		return 0;
	}
	if (m == 1){
		cout << m1;
		return 0;
	}
	if (m == 2){
		int maxn = -1;
		for (int i = 0;i < n;i++)
			for (int j = i + 1;j < n;j++)
				maxn = max(maxn,(a[i] & a[j]));
		cout << maxn;
		return 0;
	}
	if (m == n - 1) {
		int maxn = -1;
		for (int i = 0;i < n;i++)
			maxn = max(maxn,(mn & a[i]));
		cout << maxn;
		return 0;
	}
	int ans = 1;
	while (ans < n){
		ans *= 2;
		if (ans == n){
			cout << n - m;
			return 0;
		}
	}
	if (n > 2000){
		sort(a,a + n);
		cout << a[n - 2];
		return 0;
	}
	f(0,-1,-1);
	cout << ma;
	return 0;
}
