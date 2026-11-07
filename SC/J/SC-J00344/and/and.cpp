#include <bits/stdc++.h>
#define int long long

using namespace std;

int n, m;
string a[200001];
int _2[] = {1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1073741824,0};

string to_2(int &x) {
	string res = "";
	int size = 0;
	while(x) {
		res += (x % 2) + '0';
		x /= 2;
		size++;
	}
	for(int i = 1; i <= 30 - size; i++) res += '0';
	reverse(res.begin(), res.end());
	return res;
}

int to_10(string s) {
	int res = 0;
	reverse(s.begin(), s.end());
	for(int i = 0; i < 30; i++) res += (s[i] - '0') * _2[i];
	return res;
}

int ans(vector<int> f) {
	int res = to_10(a[f[0]]);
	for(int i = 1; i < m; i++) res &= to_10(a[f[i]]);
	return res;
}

int maxn(int step, int sum, const vector<int> &f) {
	if (step == 30) {
		return ans(f);
	}
	vector<int> f_1, f_2;
	int s_1 = 0;
	for(int j : f) {
		if (a[j][step] == '1') {
			s_1++;
			f_1.push_back(j);
		} else {
			f_2.push_back(j);
		}
	}
	if (s_1 >= m) {
		return maxn(step + 1, s_1, f_1);
	} else {
		return maxn(step + 1, sum, f);
	}
}

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		int flag;
		cin >> flag;
		a[i] = to_2(flag);
	}
	vector<int> f;
	for(int i = 0; i < 30; i++) {
		int sum = 0;
		f.resize(0, 0);
		for(int j = 1; j <= n; j++) {
			if (a[j][i] == '1') {
				sum++;
				f.push_back(j);
			}
		}
		if (sum >= m) {
			cout << maxn(i + 1, sum, f);
			return 0;
		}
	}
	cout << 0;
	return 0;
}