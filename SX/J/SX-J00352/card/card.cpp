#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m;

struct Li {
	int data;
	int last;
	int next;
} ta[500005];
int a[500005];
int ans[300005];
int head = 0, tail = 0, cnt = 0;

void work(int x) {
	for (int i = x; i <= n; i++) {
		for (int j = head; j != 0; j = ta[j].next) {
			if (ta[j].data == a[i]) {
				ta[ta[j].last].next = 0;
				tail = j;
				break;
			}
		}
		ta[++cnt].data = a[i];
		ta[tail].next = cnt;
		ta[cnt].last = tail;
		ta[cnt].next = 0;
		if (head == tail && tail != cnt - 1)
			head = cnt;
		tail = cnt;
	}
	cout << head << endl;
	for (int i = head; i != 0; i = ta[i].next) {
		ans[ta[i].data]++;
		cout << ta[i].data << ' ';
	}
	cout << '/';
}

signed main() {
//	freopen("card.in", "r", stdin);
//	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= n; i++) {
		memset(ta, 0, sizeof(ta));
		head = 1, tail = 1, cnt = 0;
		work(i);
	}
	for (int i = 1; i <= m; i++)
		cout << ans[i] << ' ';
	return 0;
}
