#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int inf = 0x3f3f3f3f;
const int maxn = 2e5 + 5;

int n, m;
int a[maxn];

bool cmp(int a, int b){
	return a > b; 
}

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1 ; i <= n ; ++ i){
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n, cmp);
	int ans = a[1];
	for(int i = 2 ; i <= m ; ++ i){
		ans = ans & a[i];
	}
	cout << ans;
	return 0;
}
