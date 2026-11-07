#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	freopen("string6.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	int mn = 1e15;
	int cnt = 0;
	int ans = 0;
	cin >> n;
	vector <int> all;
	string s,q;
	
	for(int i = 0;i < n;i ++){
		int e;
		char c;
		cin >> e >> c;
		all.push_back(e);
		s.push_back(c);
		mn = min(e,mn);
	}
	mn -= 1;
	for (int &i : all){
		i -= mn;
	}
	for (int i : all){
		for(int j = 0;j < i;j ++){
			q.push_back(s[cnt]);
		}
		cnt ++;
	}
	
	int l = q.size();
	for (int i = 0;i < l/2;i ++){
		if (q[i] != q[l - i - 1]) ans ++;
	}
	cout << ans*(mn + 1);
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
