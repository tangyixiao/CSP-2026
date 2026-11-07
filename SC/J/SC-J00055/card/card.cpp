#include <bits/stdc++.h>
using namespace std;

int a[500005];

void solve ()
{
	int n, m;
	cin >> n >> m;
	int i = 0;
	while (i < n)
	{
		cin >> a[i];
		i = i + 1;
	}
	int i_have_no_idea_qwq = n;
	i = 0;
	while (i < m)
	{
		cout << i_have_no_idea_qwq << " ";
		i = i + 1;
	}
	return;
}

int main ()
{
	freopen ("card.in", "r", stdin);
	freopen ("card.out", "w", stdout);
	solve ();
	fclose (stdin);
	fclose (stdout);
	return 0;
}