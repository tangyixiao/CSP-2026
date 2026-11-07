#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e6 + 50;
ll b[N];
char c[N];
struct j{
	int s;
	char c;
}a[N];
bool cmp(ll q, ll p){
	return q > p;
}
bool cpm(j q, j p){
	return (int)q.c < (int)p.c;
}
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	ll n, ans = 0;
	cin >> n;
	for(int i = 1; i <= n; i ++){
		cin >> a[i].s >> a[i].c;
	}
	sort(a + 1, a + n + 1, cpm);
	int j = 1;
	memset(b, 0, sizeof(b));
	b[1] = a[1].s;
	for(int i = 2; i <= n; i ++){
		if(a[i].c == a[i - 1].c){
			b[j] += a[i].s, ans ++;
		}
		else j ++, ans = 0;
	}
	if(ans == n - 1){
		cout << "0";
		return 0;
	}
	sort(b + 1, b + j + 1, cmp);
	cout << b[1];
	return 0;
}
