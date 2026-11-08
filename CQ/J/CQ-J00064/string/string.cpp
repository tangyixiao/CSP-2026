#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	long long cnt = 0;
	cin >> n;
	if(n <= 2000){
		bool pd = true;
		char r[100001] = {};
		int m = 1;
		for(int i = 1; i <= n; ++i) {
			int k;
			char s;
			cin >> k >> s;
			if(s != r[m - 1] && m != 1)	pd = false;
			for(int j = m; j <= m + k - 1; ++j) r[j] = s;
			m += k;
		}
		if(pd || n == 1){
			cout <<"0";
			return 0;
		}
		int l = 1;
		--m; 
		while(l <= m){
			if(r[l] != r[m])
				++cnt;
			++l;
			--m;
		}
	}
	cout << cnt;
	return 0;
} 
