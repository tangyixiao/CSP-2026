#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long sum = 0;
	int n;
	long long x[200005];
	string s;
	s += " ";
	cin >> n;
	for(int i = 1; i <= n; i ++){
		char a;
		int ab;
		cin >> ab >> a;
		x[i] = ab;
		sum += ab;
		s += a;
	}
	long long qian = sum / 2, ans = 0;
	long long l = 1, r = n;
	while(r >= l){
		if(s[r] != s[l]){
			int minn = 0x3f3f3f3f;
			minn = min(x[r], x[l]);
			ans += minn;
			if(x[r] > x[l]){
				x[r] -= minn;
				x[l] = 0;
			}
			if(x[l] > x[r]){
				x[l] -= minn;
				x[r] = 0;
			}
		}
		if(x[r] == 0) r --;
		else l ++;
	}
	cout << ans;
	return 0;
}