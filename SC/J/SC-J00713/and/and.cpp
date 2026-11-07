#include<iostream>
#include<algorithm>
using namespace std;
const int N = 2e5 + 5;
int Base = 2147483647;
int n, m;
int a[N];
int b[N];
int maxn;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	n ++ , m ++;
	int ans = 0;
	for(int i = 2; i <= n; i++){
		cin >> a[i];
		maxn = max(a[i], maxn);
	}
	while(Base > maxn) Base >>= 1;
	Base = (Base << 1) + 1;
	for(; Base > 0; ){
		if(ans > Base) break;
		b[1] = Base;
		for(int i = 2; i <= n; i++)
			b[i] = a[i] & b[1];
		sort(b + 2, b + n + 1,[](int a, int b){return a > b;});
		for(int i = 2; i <= m; i++){
			b[1] &= b[i];
			if(ans > b[1]) break;
		}
		ans = max(ans, b[1]);
		Base >>= 1;
	}
	cout << ans;
}