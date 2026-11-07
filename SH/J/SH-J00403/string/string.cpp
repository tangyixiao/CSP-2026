#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n, l, l0, g[200003], h[200003], ans;
string s;
struct range{
	int a; char c;
} a[200003], b[200003];

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i].a >> a[i].c;
		l += a[i].a, g[i] = l;
		b[i].a = a[i].a, b[i].c = a[i].c;
	}
	reverse(b + 1, b + n + 1);
	for(int i = 1; i <= n; i++){
		l0 += b[i].a, h[i] = l0;
	}
	ll mid = l / 2, j = 1;
	for(int i = 1; ;i++){
		while(h[j] <= min(g[i], mid)){
			if(a[i].c != b[j].c){
				ans += h[j] - max(h[j - 1], g[i - 1]);
			}
			j += 1;
		}
		if(h[j] > min(g[i], mid)){
			if(a[i].c != b[j].c){
				ans += min(g[i], mid) - max(h[j - 1], g[i - 1]);
			}
		}
		if(g[i] > mid) break;
	}
	cout << ans;
	return 0;
}
