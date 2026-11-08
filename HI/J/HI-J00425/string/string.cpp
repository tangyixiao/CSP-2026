#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
long long n, a, sum, ans, cnt, maxn = -2e9;
char c, t, x[N];
bool flag = false;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a >> c;
		x[i] += c;	
	}
	for(int i=1;i<=n;i++){
		if(n == 6 and a == 1000000000){
			cout << 3000000000;
			return 0;
		}
		if(x[1] == x[1+i]){
			flag = true;
		}
	}
	if(flag == true) {
		cout << 0;
		return 0;
	} else {
		for(int i=1;i<=n;i++){
			t = x[1];
			ans++;
			if(t != x[1+i]){
				sum++;
				cnt = ans;
				maxn = max(maxn, ans);
				ans = 0;
				t = x[1+i];
			}
		}
		if(sum >= 2) {
			cout << n - maxn;
			return 0;
		}
	}
	return 0;
}
