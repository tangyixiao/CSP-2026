#include <bits/stdc++.h>
using namespace std;
int n , m , arr[200005];
long long num = 0;
bool cmp (long long a , long long b) {
	return a > b;
}
int main () {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;++i) {
		cin >> arr[i];
	}
	sort(arr+1,arr+n+1,cmp);
	num = arr[1];
	for (int i = 2;i <= m;++i) {
		num = num & arr[i];
	}
	cout << num;
	return 0;
}
