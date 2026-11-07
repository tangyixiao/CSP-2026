#include <bits/stdc++.h>

using namespace std;

#define N 200005

int n, m;
bool h[N][32];
vector<int> dataidx[32];

void countbit(int b) {
    for (int i = 0; i < n; ++i) {
    	if (h[i][b]) {
    		dataidx[b].push_back(i);
		}
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		int k;
		cin >> k;
		
		for (int bb = 31; bb >= 0; --bb) {
			if (((k >> bb) & 1) == 1) {
				h[i][bb] = true;
			}
		}
	}
	
	set<int> data;
	array<bool, 32> full;
	memset(full.data(), 0x00, 32);
	
	for (int bb = 31; bb >= 0; --bb) {
		countbit(bb);
	}
	
	int startbit = 0;
	for (int bb = 31; bb >= 0; --bb) {
		if (dataidx[bb].size() >= m) {
			for (auto k : dataidx[bb]) {
				data.insert(k);
			}
			startbit = bb;
			full[bb] = true;
			break;
		}
	}
	
	for (int bb = startbit - 1; bb >= 0; --bb) {
		set<int> d;
		for (auto k : dataidx[bb]) {
			if (data.count(k)) {
				d.insert(k);
			}
		}
		
		if (d.size() >= m) {
			full[bb] = true;
			data = d;
		}
	}
	
	int ans = 0;
	for (int bb = 31; bb >= 0; --bb) {
		if (full[bb]) {
			ans |= (1 << bb);
		}
	}
	
	cout << ans << endl;
}
