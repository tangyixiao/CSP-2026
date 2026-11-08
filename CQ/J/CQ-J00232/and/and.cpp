#include<bits/stdc++.h>
using namespace std;
int a[200005];
int f(int x) {
	int k = 0;
	while(x > 0) {
		if(x % 2 == 1) k ++;
		x /= 2;
	}
	return k;
} 
bool cmp(int a1,int a2) {
	if(f(a1) != f(a2)) return f(a1) < f(a2);
	else return a1 < a2;
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,pp = 0;
	cin >> n >> m;
	for(int i = 1;i <= n;i ++) {
		cin >> a[i];
		if(a[i] != i - 1) pp = 1;
	} 
	if(pp == 0) {
		for(int i = 1;i <= n;i ++) if(pow(2,i) == a) cout << pow(2,i - m +) - 1;
		//cout << pow(2,n - m);
		return 0;
	}
	sort(a + 1,a + 1 + n,cmp);
	int ans = a[n];
	for(int i = n - 1;i >= n - m + 1;i --) {
		ans &= a[i];
	}
	cout << ans;
	return 0;
}
