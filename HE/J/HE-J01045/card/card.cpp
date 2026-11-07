#include <iostream>
#include <cstdio>
#include <deque>
using namespace::std;
const int N = 5e5 + 10;
int a[N], ans[N];
bool tt[N];
deque<int> q;
int n, m;
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for(register int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	for(int i = 1; i <= n; i++) {
		for(int s = 1; s <= m; s++) tt[s] = 0;
		while(!q.empty()) q.pop_front();
		for(int j = i; j <= n; j++) {
			q.push_back(a[j]);
			for(int k = 0; k < q.size() - 1; k++) {
				if(q[k] == a[j]) {
					bool tttt = 1;
					while(q.back() != a[j] || tttt) {
						tttt = 0;
						q.pop_back();
					}
					break;
				}
			}
//			for(int t = 0; t < q.size(); t++) printf("%d ", q[i]);
		}
		
//		printf("\n");
		for(int w = 0; w < q.size(); w++) {
			if(!tt[q[w]]) {
				tt[q[w]] = 1;
				ans[q[w]]++;
			}
		}
	}
	for(int i = 1; i <= m; i++) {
		printf("%lld ", ans[i]);
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
