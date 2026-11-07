#include <bits/stdc++.h>
using namespace std;
bool hw(string ss){
	string fss;
	for (int i = ss.size() - 1; i >= 0; i--) fss += ss[i];
	if (fss == ss) return true;
	else return false;
}
int cnt[30], ans;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	string s;
	for (int i = 1; i <= n; i++){
		int a;
		char c;
		cin >> a >> c;
		for (int i = 1; i <= a; i++) s += c;
		cnt[int(c - 'a' + 1)] += a;
	}
	if (hw(s)){
		cout << 0;
		return 0;
	}
	while (1){
		char ch1, ch2;
		int minn = 1e9, idx1, idx2, maxn = -1e9;
		for (int i = 1; i <= 26; i++){
			if (cnt[i] < minn && cnt[i] != 0){
				minn = cnt[i];
				idx1 = i;
			}
			if (cnt[i] > maxn && cnt[i] != 0){
				maxn = cnt[i];
				idx2 = i;
			}
		}
		ch1 = char(idx1 - 1 + 'a');
		ch2 = char(idx2 - 1 + 'a');
		for (int i = s.size() - 1; i >= 0; i--){
			if (s[i] == ch1){
				s[i] = ch2;
				ans++;
				cnt[(int)(ch1 - 'a' + 1)]--;
				cnt[(int)(ch2 - 'a' + 1)]++;
				break;
			}
		}
		if(hw(s)) break;
	}
	cout << ans;
	return 0;
}
