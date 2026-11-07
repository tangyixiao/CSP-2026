#include <bits/stdc++.h>
using namespace std;
const int INF = 1100000000;
long long start = 1, cnt, turns;
struct item
{
	long long it, prev, next;
	char c; 
} a[200001];
int main ()
{
	freopen("string.in" ,"r", stdin);
	freopen("string.out" ,"w", stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		char c;
		int it;
		cin >> it >> c;
		a[i].it = it, a[i].c = c, a[i].prev = i - 1, a[i].next = i + 1;
	}
	a[1].prev = -INF, a[n].next = INF;
	int i = start, j = n;
	while (i <= j && turns <= 3)
	{
		int minn = min(a[i].it, a[j].it);
		if (i == j) break;
		if (a[i].c == a[j].c) a[i].it -= minn, a[j].it -= minn;
		else a[i].it -= minn, a[j].it -= minn, cnt += minn;
		if (a[i].it == 0) i = a[i].next;
		if (a[j].it == 0) j = a[j].prev;
	}
	cout << cnt;
	return 0;
}
