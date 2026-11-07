#include <bits/stdc++.h>
using i32 = int;
using i64 = long long;
using namespace std;
#define READ_FILE 1
string tgt;
i32 n;

i32 main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
#if READ_FILE
	freopen("string.in" ,"r", stdin);
	freopen("string.out", "w", stdout);
#endif
	
	cin >> n;
	bool sj1[26];
	i32 sj1_cnt = 0;
	for(i32 i=1;i<=n;i++) {
		i32 amt;
		char ch;
		cin >> amt >> ch;
		// 暴力模拟，正解需要至少O(nlogn)
		string tmp(amt, ch);
		tgt += tmp;
		
		if(!sj1[ch-'a']) {
			sj1[ch-'a'] = 1;
			++ sj1_cnt;
		}
	}
	
	// 68 pts
	i32 sz = i32(tgt.size());
	i32 mid = sz >> 1;
	i64 ans = 0;
	// sj1 只有一种字符
	if(sj1_cnt <= 1) ans = 0;
	else for(i32 i=mid+(sz & 1);i<=sz-1;i++) {
		i32 j = 2*mid - i;
		if(tgt[i] != tgt[j]) ++ ans;
	}
	cout << ans;
	return 0;
}