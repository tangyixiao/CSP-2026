#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5+5;
ll n, m, mx = -1, a[N];

bool cmp(ll x, ll y) {
	return x > y;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		mx = max(mx, a[i]);
	}
	if (m == 1)
		cout << mx;
	else if (m == 2) {
		ll ans = -1;
		for (int i = 1; i <= n; i++)
			for (int j = i + 1; j <= n; j++)
				ans = max(ans, a[i] & a[j]);
		cout << ans;
	} else if (m == n) {
		ll ans = a[1];
		for (int i = 2; i <= n; i++)
			ans = ans & a[i];
		cout << ans;
	} else {
		if (n <= 20) {
			ll ans = -1;
			if (m == 3)
				for (int i = 1; i <= n; i++)
					for (int j = i + 1; j <= n; j++)
						for (int k = j + 1; k <= n; k++)
							ans = max(ans, a[i] & a[j] & a[k]);
			else if (m == 4)
				for (int z = 1; z <= n; z++)
					for (int b = z + 1; b <= n; b++)
						for (int c = b + 1; c <= n; c++)
							for (int d = c + 1; d <= n; d++)
								ans = max(ans, a[z] & a[b] & a[c] & a[d]);
			else if (m == 5)
				for (int z = 1; z <= n; z++)
					for (int b = z + 1; b <= n; b++)
						for (int c = b + 1; c <= n; c++)
							for (int d = c + 1; d <= n; d++)
								for (int e = d + 1; e <= n; e++)
									ans = max(ans, a[z] & a[b] & a[c] & a[d] & a[e]);
			else if (m == 6)
				for (int z = 1; z <= n; z++)
					for (int b = z + 1; b <= n; b++)
						for (int c = b + 1; c <= n; c++)
							for (int d = c + 1; d <= n; d++)
								for (int e = d + 1; e <= n; e++)
									for (int f = e + 1; f <= n; f++)
										ans = max(ans, a[z] & a[b] & a[c] & a[d] & a[e] & a[f]);
			else if (m == 7)
				for (int z = 1; z <= n; z++)
					for (int b = z + 1; b <= n; b++)
						for (int c = b + 1; c <= n; c++)
							for (int d = c + 1; d <= n; d++)
								for (int e = d + 1; e <= n; e++)
									for (int f = e + 1; f <= n; f++)
										for (int g = f + 1; g <= n; g++)
											ans = max(ans, a[z] & a[b] & a[c] & a[d] & a[e] & a[f] & a[g]);
			else if (m == 8)
				for (int z = 1; z <= n; z++)
					for (int b = z + 1; b <= n; b++)
						for (int c = b + 1; c <= n; c++)
							for (int d = c + 1; d <= n; d++)
								for (int e = d + 1; e <= n; e++)
									for (int f = e + 1; f <= n; f++)
										for (int g = f + 1; g <= n; g++)
											for (int h = g + 1; h <= n; h++)
												ans = max(ans, a[z] & a[b] & a[c] & a[d] & a[e] & a[f] & a[g] & a[h]);
			else if (m == 9)
				for (int z = 1; z <= n; z++)
					for (int b = z + 1; b <= n; b++)
						for (int c = b + 1; c <= n; c++)
							for (int d = c + 1; d <= n; d++)
								for (int e = d + 1; e <= n; e++)
									for (int f = e + 1; f <= n; f++)
										for (int g = f + 1; g <= n; g++)
											for (int h = g + 1; h <= n; h++)
												for (int i = h + 1; h <= n; h++)
													ans = max(ans, a[z] & a[b] & a[c] & a[d] & a[e] & a[f] & a[g] & a[h] & a[i]);
			else if (m == 10)
				for (int z = 1; z <= n; z++)
					for (int b = z + 1; b <= n; b++)
						for (int c = b + 1; c <= n; c++)
							for (int d = c + 1; d <= n; d++)
								for (int e = d + 1; e <= n; e++)
									for (int f = e + 1; f <= n; f++)
										for (int g = f + 1; g <= n; g++)
											for (int h = g + 1; h <= n; h++)
												for (int i = h + 1; h <= n; h++)
													for (int j = i + 1; j <= n; j++)
														ans = max(ans, a[z] & a[b] & a[c] & a[d] & a[e] & a[f] & a[g] & a[h] & a[i] & a[j]);
			else if (m == 11)
				for (int z = 1; z <= n; z++)
					for (int b = z + 1; b <= n; b++)
						for (int c = b + 1; c <= n; c++)
							for (int d = c + 1; d <= n; d++)
								for (int e = d + 1; e <= n; e++)
									for (int f = e + 1; f <= n; f++)
										for (int g = f + 1; g <= n; g++)
											for (int h = g + 1; h <= n; h++)
												for (int i = h + 1; h <= n; h++)
													for (int j = i + 1; j <= n; j++)
														for (int k = j + 1; k <= n; k++)
															ans = max(ans, a[z] & a[b] & a[c] & a[d] & a[e] & a[f] & a[g] & a[h] & a[i] & a[j] & a[k]);
			else if (m == 12)
				for (int z = 1; z <= n; z++)
					for (int b = z + 1; b <= n; b++)
						for (int c = b + 1; c <= n; c++)
							for (int d = c + 1; d <= n; d++)
								for (int e = d + 1; e <= n; e++)
									for (int f = e + 1; f <= n; f++)
										for (int g = f + 1; g <= n; g++)
											for (int h = g + 1; h <= n; h++)
												for (int i = h + 1; h <= n; h++)
													for (int j = i + 1; j <= n; j++)
														for (int k = j + 1; k <= n; k++)
															for (int l = k + 1; l <= n; l++)
																ans = max(ans, a[z] & a[b] & a[c] & a[d] & a[e] & a[f] & a[g] & a[h] & a[i] & a[j] & a[k] & a[l]);
			else if (m == 13)
				for (int z = 1; z <= n; z++)
					for (int b = z + 1; b <= n; b++)
						for (int c = b + 1; c <= n; c++)
							for (int d = c + 1; d <= n; d++)
								for (int e = d + 1; e <= n; e++)
									for (int f = e + 1; f <= n; f++)
										for (int g = f + 1; g <= n; g++)
											for (int h = g + 1; h <= n; h++)
												for (int i = h + 1; h <= n; h++)
													for (int j = i + 1; j <= n; j++)
														for (int k = j + 1; k <= n; k++)
															for (int l = k + 1; l <= n; l++)
																for (int o = l + 1; o <= n; o++)
																	ans = max(ans, a[z] & a[b] & a[c] & a[d] & a[e] & a[f] & a[g] & a[h] & a[i] & a[j] & a[k] & a[l] & a[o]);
			else if (m == 14)
				for (int z = 1; z <= n; z++)
					for (int b = z + 1; b <= n; b++)
						for (int c = b + 1; c <= n; c++)
							for (int d = c + 1; d <= n; d++)
								for (int e = d + 1; e <= n; e++)
									for (int f = e + 1; f <= n; f++)
										for (int g = f + 1; g <= n; g++)
											for (int h = g + 1; h <= n; h++)
												for (int i = h + 1; h <= n; h++)
													for (int j = i + 1; j <= n; j++)
														for (int k = j + 1; k <= n; k++)
															for (int l = k + 1; l <= n; l++)
																for (int o = l + 1; o <= n; o++)
																	for (int p = o + 1; p <= n; p++)
																		ans = max(ans, a[z] & a[b] & a[c] & a[d] & a[e] & a[f] & a[g] & a[h] & a[i] & a[j] & a[k] & a[l] & a[o] & a[p]);
			else if (m == 15)
				for (int z = 1; z <= n; z++)
					for (int b = z + 1; b <= n; b++)
						for (int c = b + 1; c <= n; c++)
							for (int d = c + 1; d <= n; d++)
								for (int e = d + 1; e <= n; e++)
									for (int f = e + 1; f <= n; f++)
										for (int g = f + 1; g <= n; g++)
											for (int h = g + 1; h <= n; h++)
												for (int i = h + 1; h <= n; h++)
													for (int j = i + 1; j <= n; j++)
														for (int k = j + 1; k <= n; k++)
															for (int l = k + 1; l <= n; l++)
																for (int o = l + 1; o <= n; o++)
																	for (int p = o + 1; p <= n; p++)
																		for (int q = p + 1; q <= n; q++)
																			ans = max(ans, a[z] & a[b] & a[c] & a[d] & a[e] & a[f] & a[g] & a[h] & a[i] & a[j] & a[k] & a[l] & a[o] & a[p] & a[q]);
			else if (m == 16)
				for (int z = 1; z <= n; z++)
					for (int b = z + 1; b <= n; b++)
						for (int c = b + 1; c <= n; c++)
							for (int d = c + 1; d <= n; d++)
								for (int e = d + 1; e <= n; e++)
									for (int f = e + 1; f <= n; f++)
										for (int g = f + 1; g <= n; g++)
											for (int h = g + 1; h <= n; h++)
												for (int i = h + 1; h <= n; h++)
													for (int j = i + 1; j <= n; j++)
														for (int k = j + 1; k <= n; k++)
															for (int l = k + 1; l <= n; l++)
																for (int o = l + 1; o <= n; o++)
																	for (int p = o + 1; p <= n; p++)
																		for (int q = p + 1; q <= n; q++)
																			for (int r = q + 1; r <= n; r++)
																				ans = max(ans, a[z] & a[b] & a[c] & a[d] & a[e] & a[f] & a[g] & a[h] & a[i] & a[j] & a[k] & a[l] & a[o] & a[p] & a[q] &
																				          a[r]);
			else if (m == 17)
				for (int z = 1; z <= n; z++)
					for (int b = z + 1; b <= n; b++)
						for (int c = b + 1; c <= n; c++)
							for (int d = c + 1; d <= n; d++)
								for (int e = d + 1; e <= n; e++)
									for (int f = e + 1; f <= n; f++)
										for (int g = f + 1; g <= n; g++)
											for (int h = g + 1; h <= n; h++)
												for (int i = h + 1; h <= n; h++)
													for (int j = i + 1; j <= n; j++)
														for (int k = j + 1; k <= n; k++)
															for (int l = k + 1; l <= n; l++)
																for (int o = l + 1; o <= n; o++)
																	for (int p = o + 1; p <= n; p++)
																		for (int q = p + 1; q <= n; q++)
																			for (int r = q + 1; r <= n; r++)
																				for (int u = r + 1; u <= n; u++)
																					ans = max(ans, a[z] & a[b] & a[c] & a[d] & a[e] & a[f] & a[g] & a[h] & a[i] & a[j] & a[k] & a[l] & a[o] & a[p] & a[q] &
																					          a[r] & a[u]);
			else if (m == 18)
				for (int z = 1; z <= n; z++)
					for (int b = z + 1; b <= n; b++)
						for (int c = b + 1; c <= n; c++)
							for (int d = c + 1; d <= n; d++)
								for (int e = d + 1; e <= n; e++)
									for (int f = e + 1; f <= n; f++)
										for (int g = f + 1; g <= n; g++)
											for (int h = g + 1; h <= n; h++)
												for (int i = h + 1; h <= n; h++)
													for (int j = i + 1; j <= n; j++)
														for (int k = j + 1; k <= n; k++)
															for (int l = k + 1; l <= n; l++)
																for (int o = l + 1; o <= n; o++)
																	for (int p = o + 1; p <= n; p++)
																		for (int q = p + 1; q <= n; q++)
																			for (int r = q + 1; r <= n; r++)
																				for (int u = r + 1; u <= n; u++)
																					for (int v = u + 1; v <= n; v++)
																						ans = max(ans, a[z] & a[b] & a[c] & a[d] & a[e] & a[f] & a[g] & a[h] & a[i] & a[j] & a[k] & a[l] & a[o] & a[p] & a[q] &
																						          a[r] & a[u] & a[v]);
			cout << ans;
		} else {
			sort(a + 1, a + n + 1, cmp);
			ll ans = a[1];
			for (int i = 2; i <= m; i++)
				ans = ans & a[i];
			cout << ans;
		}
	}
	return 0;
}