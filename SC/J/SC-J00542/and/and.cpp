#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[100005];
string s[100005];
long long tong[100005];
long long ans;
string ershi(long long x) {
	string str;
	while(x) {
		char c = x % 2 + '0';
		str = c + str;
		x /= 2;
	}
	return str;
}
bool cmp(string s1,string s2) {
	if (s1.size() != s2.size()) return s1.size() > s2.size();
	return s1 > s2;
}
int main() {
	freopen("and.in","r",stdin);
freopen("and.out","w",stdout);
	cin >> n >> m;
	int maxx = -1;
	for (int i = 1;i <= n;i++) {
		cin >> a[i];
		s[i] = ershi(a[i]);
		maxx = max(maxx,int(s[i].size()));
		for (int j = 0;j < s[i].size();j++) tong[s[i].size() - j - 1] += s[i][j] - '0';
	}
	int cnt = -1;
	for (int i = maxx;i >= 0;i--) {
		cout << maxx << endl;
		if (tong[i] >= m) {
			cnt = i;
			break;
		}
	}
	for (int i = 1;i <= n;i++) {
		if (s[i].size() > cnt) {
			s[i] = s[i].substr(max(0,int(s[i].size()) - cnt));
			while(s[i][0] == 0) s[i] = s[i].substr(1);
		}
	}
	sort(s + 1,s + 1 + n,cmp);
	for(int i = 1;i <= n;i++) cout << s[i] << endl;
	int d = 1;
	for (int i = 0;i <= cnt;i++) {
		bool flag = 1;
		for (int j = 1;j <= m;j++) 
			if (!s[j][i]) {
				flag = 0;
				break;
			}
		if (flag) ans += d;
		d *= 2;
	}
	cout << ans;
	return 0;
}
/*
4 2
3 15 12 12
*/