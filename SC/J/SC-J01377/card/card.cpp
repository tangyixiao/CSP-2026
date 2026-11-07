#include <bits/stdc++.h>
using namespace std;

const int N = 5e5 + 5;

int n, m;
int a[N], posr[N], ne[N], ans[N];

struct seg_tree
{
	struct node
	{
		int l, r, sum, lazy;
	} tr[4 * N];
	void push_up(int p)
	{
		tr[p].sum = tr[p * 2].sum + tr[p * 2 + 1].sum;
	}
	void push_down(int p)
	{
		if (tr[p].lazy)
		{
			tr[p * 2].lazy += tr[p].lazy, tr[p * 2 + 1].lazy += tr[p].lazy;
			tr[p * 2].sum += (tr[p * 2].r - tr[p * 2].l + 1) * tr[p].lazy;
			tr[p * 2 + 1].sum += (tr[p * 2 + 1].r - tr[p * 2 + 1].l + 1) * tr[p].lazy;
			tr[p].lazy = 0;
		}
	}
	void build(int p, int l, int r)
	{
		tr[p] = {l, r, 0, 0};
		if (l == r) return;
		int mid = (l + r) >> 1;
		build(p * 2, l, mid);
		build(p * 2 + 1, mid + 1, r);
	}
	void modify(int p, int l, int r, int x)
	{
		if (l > r) return;
		if (l <= tr[p].l && tr[p].r <= r)
		{
			tr[p].sum += (tr[p].r - tr[p].l + 1) * x;
			tr[p].lazy += x;
			return;
		}
		push_down(p);
		int mid = (tr[p].l + tr[p].r) >> 1;
		if (l <= mid) modify(p * 2, l, r, x);
		if (r > mid) modify(p * 2 + 1, l, r, x);
		push_up(p);
	}
	int query(int p, int l, int r)
	{
		if (l > r) return 0;
		if (l <= tr[p].l && tr[p].r <= r) return tr[p].sum;
		push_down(p);
		int mid = (tr[p].l + tr[p].r) >> 1, res = 0;
		if (l <= mid) res += query(p * 2, l, r);
		if (r > mid) res += query(p * 2 + 1, l, r);
		return res;
	}
} ST;

int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
		posr[a[i]] = i;
	}
	vector<int> tmp;
	for (int i = 1; i <= n; i++)
		if (posr[a[i]] > i) tmp.push_back(i);
	sort(tmp.begin(), tmp.end());
	int maxn = tmp[tmp.size() - 1];
	for (int i = 1; i <= n; i++)
	{
		if (posr[a[i]] != i)
		{
			ne[i] = posr[a[i]];
		}
		else
		{
			if (i >= maxn)
			{
				ne[i] = n + 1;
			}
			else
			{
				int now = tmp[upper_bound(tmp.begin(), tmp.end(), i) - tmp.begin()];
				ne[i] = now;
			}
		}
	}
	ST.build(1, 1, n);
	for (int i = 1; i <= n; i++)
	{
		int pos = i;
		while (pos <= n)
		{
			if (a[pos] != a[ne[pos]])
			{
				ST.modify(1, pos, ne[pos] - 1, 1);
				pos = ne[pos];
			}
			else
			{
				ans[a[pos]]++;
				pos = ne[pos] + 1;
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		ans[a[i]] += ST.query(1, i, i);
	}
	for (int i = 1; i <= m; i++)
		printf("%d ", ans[i]);
	return 0;
}

/*
9:00 Start.
10:35 Finished 48pts, thought about 100pts but I have no clue.
10:51 I think I know how to do it?? I'm not sure, let's write the code first.
11:03 Finished coding, but can't get past the first test. Also, the time complexity should be wrong, although I have no idea what it is.
11:30 Passed all samples, biggest at card6, 0.49s. 
*/