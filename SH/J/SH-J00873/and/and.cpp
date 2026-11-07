 #include <bits/stdc++.h>
using namespace std;
int a[200001];
unsigned long long f[2001], g[2001];
bool caseA = true;
int maxA = 0;
int n, m;
int checkA (int x)
{
	int cnt = 0;
	x++;
	while (x > 1)
	{
		if (x % 2 == 1) return -1;
		x /= 2, cnt++;
	}
	return cnt;
}
unsigned long long pow (long long a, long long b)
{
	if (b == 0) return 1;
	if (b == 1) return a;
	unsigned long long cur = pow(a, b / 2);
	return ((b % 2 == 0) ? 1 : a) * cur * cur;
}
unsigned long long cal (int i, unsigned long long state, int chosen)
{
	if (chosen == m) return state;
	unsigned long long ans;
	if (m - chosen > n - i) ans = max(cal(i + 1, state, chosen), cal(i + 1, state & a[i + 1], chosen + 1));
	else ans = cal(i + 1, state & a[i + 1], chosen + 1);
	return ans;
}
int main ()
{
	freopen("and.in" ,"r", stdin);
	freopen("and.out" ,"w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		int check = checkA(a[i]);
		if (check == -1) caseA = false;
		else maxA = max(maxA, check);
	}
	if (caseA)
	{
		unsigned long long ans = 0;
		cout << pow(2, m) - 1;
		return 0;
	}
	sort(a + 1, a + n + 1);
	if (n <= 2001)
	{
		for (int j = 1; j <= m; j++)
		{
			for (int i = j; i <= n; i++)
			{
				if (j == 1) g[i] = a[i];
				else
					for (int k = 1; k <= i - j + 1; k++) g[i] = max(g[i], a[i] & f[i - k]);
					
			}
			for (int i = 1; i <= n; i++) f[i] = g[i], g[i] = 0;
		}
		unsigned long long ans = 0;
		for (int i = 1; i <= n; i++) ans = max(ans, f[i]);
		cout << ans;
	}
	else
	{
		sort(a + 1, a + n + 1);
		reverse(a + 1, a + n + 1);
		unsigned long long ans = 0;
		for (int i = 1; i <= n - m; i++) ans = max(ans, cal(i, a[i], 1));
		cout << ans;
	}
	return 0;
}
