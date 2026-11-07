#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 5e5 + 10;
int s[N], cnt[N], ib[N];
bool b[N];
signed main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++){
		cin >> s[i];
	}
	if (m > 3000){
		for (int i = 1; i <= n; i++){
			ib[s[i]] ++;
		}
		for (int i = 1; i <= m; i++){
			if (ib[i] > 0) cnt[i] = n;
		}
		for (int i = 2; i <= n; i++){
			ib[s[i-1]]--;
			if (ib[s[i-1]] == 0) cnt[s[i-1]] = i - 1;
		}
		for (int i = 1; i <= m; i++){
			cout << cnt[i] << ' ';
		}
		cout << endl;
		return 0;
	}
	for (int i = 1; i <= n; i++){
		stack<int>stk;
		memset(b, 0, sizeof(b));
		for (int j = i; j <= n; j++){
			if (b[s[j]]){
				while (stk.top() != s[j] && stk.size()){
					b[stk.top()] = 0;
					stk.pop();
				}
			}
			else {
				b[s[j]] = 1;
				stk.push(s[j]);
			}
		}
		for(int j = 1; j <= m; j++){
			if (b[j]) cnt[j] ++;
		}
	}
	for (int i = 1; i <= m; i++){
		cout << cnt[i] << ' ';
	}
	cout << '\n';
	return 0;
}
