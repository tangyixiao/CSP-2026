#include <bits/stdc++.h>
using namespace std;
const int MAXN = 200026;
int n, m, k, pp, start, sum = 0;
int a[MAXN][33], qlen = 0, yes[33];
queue<int> q;

void turn2(int s) {
	int p[33];
	int len;
	memset(p, 0, sizeof(p));
	for (len = 1; s; len++) {
		p[len] = s % 2;
		s /= 2;
	}
	for (int i = len; i > 0; i--) {
		a[pp][33 - i] = p[i];
		a[0][33 - i] += p[i];

	}

}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (pp = 1; pp <= n; pp++) {
		cin >> k;
		turn2(k);
	}
	//寻找满足要求的最大位 33是空的
	for (int i = 0; i <= 32; i++) {
		if (a[0][i] >= m) {
			for (int j = 1; j <= n; j++) {
				if (a[j][i] == 1) {
					q.push(j);
					qlen++;
				}
			}
			start = i + 1;
			sum += pow(2, 32 - i);
			break;
		}
	}
	for (int i = start; i <= 32; i++) {
		if (a[0][i] < m)
			continue; //优化：若全体数字该位数不满足，则不考虑
		int manzu = 0;
		queue<int> man;//man为满足队列，符合要求就会替代q
		for (int j = 1; j <= qlen; j++) {
			int cur = q.front();
			q.pop();
			q.push(cur); //循环取,但不删除

			if (a[cur][i] == 1) {
				man.push(cur);
				manzu++;
			}
		}
		if (manzu >= m) { //满足条件，sum+,用man取代q
			sum += pow(2, 32 - i);
			while (!q.empty()) {
				q.pop();
			}
			while (!man.empty()) {
				q.push(man.front());
				man.pop();
			}
			qlen = manzu;
		}
	}
	cout << sum;

	return 0;
}


//致敬传奇lxs_123
//清理队列!q.empty()写成q.empty()之人
//不更新队列长度导致其重复取之人

//刚开始想的是sort
//后面发现是得一步一步缩区间