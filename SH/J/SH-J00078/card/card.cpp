#include <bits/stdc++.h>

using namespace std;

#define N 500005
#define M 300005

int n, m;
vector<int> pos[N];
int ans[M];
int firstfind[M];

pair<int, int> sections[N];
int sectioncount = 0;
int secbegin = 0;
bool state[N];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	cin >> n >> m;
	
	for (int i = 1; i <= n; ++i) {
		int k;
		cin >> k;
		pos[k].push_back(i);
	}
	
	for (int i = 1; i <= m; ++i) {
		for (int pp = 0; pp < pos[i].size() - 1; ++pp) {
			sections[sectioncount] = {pos[i][pp], pos[i][pp + 1] - 1};
			sectioncount++;
		}
	}
	sort(&sections[0], &sections[sectioncount]);
	
	for (int i = 1; i <= n; ++i) {
		memset(state + i, 0x00, n - i + 1);
		
		for (int seci = secbegin; seci < sectioncount; ++seci) {
			const auto &sec = sections[seci];
			if (i > sec.first) {
				secbegin++;
				continue;
			}
			
			if (!state[sec.first]) {
				memset(state + sec.first, 0x01, sec.second - sec.first + 1);
			}
		}
		
		for (int k = 1; k <= m; ++k) {
			const auto &poss = pos[k];
			for (int p = firstfind[k]; p < poss.size(); ++p) {
				if (poss[p] >= i && !state[poss[p]]) {
					ans[k]++;
					firstfind[k] = p;
					break;
				}
			}
		}
	}
	
	for (int k = 1; k <= m; ++k) {
		cout << ans[k] << " ";
	}
}
