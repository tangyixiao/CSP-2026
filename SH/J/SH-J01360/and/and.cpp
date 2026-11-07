#include <bits/stdc++.h>
using namespace std;

long long n,m;
long long a[200005];
long long ans,maxn1,maxn;

int main()
{
	freopen("and.in" , "r" , stdin);
	freopen("and.out" , "w" , stdout);
	
	cin >> n >> m;
	for (int i = 1 ; i <= n ; i++)
	{
		cin >> a[i];
		maxn1 = max(maxn,a[i]);
	}
	ans = a[1];
	for (int i = 2 ; i <= n ; i++)
		ans = ans&a[1];
		
	if (m == 1) cout << maxn1;
	if (m == n) cout << ans;
	if (m == 2)
	{
		for (int i = 1 ; i <= n ; i++)
			for (int j = i+1 ; j <= n ; j++)
				maxn = max(maxn , a[i]&a[j]);
		cout << maxn;
	}
	if (m == 3)
	{
		for (int i = 1 ; i <= n ; i++)
			for (int j = i+1 ; j <= n ; j++)
				for (int k = j+1 ; k <= n ; k++)
					maxn = max(maxn , a[i]&a[j]&a[k]);
		cout << maxn;
	}
	if (m == 4)
	{
		for (int i = 1 ; i <= n ; i++)
			for (int j = i+1 ; j <= n ; j++)
				for (int k = j+1 ; k <= n ; k++)
					for (int p = k+1 ; p <= n ; p++)
						maxn = max(maxn , a[i]&a[j]&a[k]&a[p]);
		cout << maxn;
	}
	if (m == 5)
	{
		for (int i = 1 ; i <= n ; i++)
			for (int j = i+1 ; j <= n ; j++)
				for (int k = j+1 ; k <= n ; k++)
					for (int p = k+1 ; p <= n ; p++)
						for (int q = p+1 ; q <= n ; q++)
							maxn = max(maxn , a[i]&a[j]&a[k]&a[p]&a[q]);
		cout << maxn;
	}	
	if (m == 6)
	{
		for (int i = 1 ; i <= n ; i++)
			for (int j = i+1 ; j <= n ; j++)
				for (int k = j+1 ; k <= n ; k++)
					for (int p = k+1 ; p <= n ; p++)
						for (int q = p+1 ; q <= n ; q++)
							for (int b = q+1 ; b <= n ; b++)
								maxn = max(maxn , a[i]&a[j]&a[k]&a[p]&a[q]&a[b]);
		cout << maxn;
	}	
	if (m == 7)
	{
		for (int i = 1 ; i <= n ; i++)
			for (int j = i+1 ; j <= n ; j++)
				for (int k = j+1 ; k <= n ; k++)
					for (int p = k+1 ; p <= n ; p++)
						for (int q = p+1 ; q <= n ; q++)
							for (int b = q+1 ; b <= n ; b++)
								for (int c = b+1 ; c <= n ; c++)
									maxn = max(maxn , a[i]&a[j]&a[k]&a[p]&a[q]&a[b]&a[c]);
		cout << maxn;
	}
	if (m == 8)
	{
		for (int i = 1 ; i <= n ; i++)
			for (int j = i+1 ; j <= n ; j++)
				for (int k = j+1 ; k <= n ; k++)
					for (int p = k+1 ; p <= n ; p++)
						for (int q = p+1 ; q <= n ; q++)
							for (int b = q+1 ; b <= n ; b++)
								for (int c = b+1 ; c <= n ; c++)
									for (int d = c+1 ; d <= n ; d++)
										maxn = max(maxn , a[i]&a[j]&a[k]&a[p]&a[q]&a[b]&a[c]&a[d]);
		cout << maxn;
	}
	if (m == 9)
	{
		for (int i = 1 ; i <= n ; i++)
			for (int j = i+1 ; j <= n ; j++)
				for (int k = j+1 ; k <= n ; k++)
					for (int p = k+1 ; p <= n ; p++)
						for (int q = p+1 ; q <= n ; q++)
							for (int b = q+1 ; b <= n ; b++)
								for (int c = b+1 ; c <= n ; c++)
									for (int d = c+1 ; d <= n ; d++)
										for (int e = d+1 ; e <= n ; e++)
											maxn = max(maxn , a[i]&a[j]&a[k]&a[p]&a[q]&a[b]&a[c]&a[d]&a[e]);
		cout << maxn;
	}	
	if (m == 10)
	{
		for (int i = 1 ; i <= n ; i++)
			for (int j = i+1 ; j <= n ; j++)
				for (int k = j+1 ; k <= n ; k++)
					for (int p = k+1 ; p <= n ; p++)
						for (int q = p+1 ; q <= n ; q++)
							for (int b = q+1 ; b <= n ; b++)
								for (int c = b+1 ; c <= n ; c++)
									for (int d = c+1 ; d <= n ; d++)
										for (int e = d+1 ; e <= n ; e++)
											for (int f = e+1 ; f <= n ; f++)
												maxn = max(maxn , a[i]&a[j]&a[k]&a[p]&a[q]&a[b]&a[c]&a[d]&a[e]&a[f]);
		cout << maxn;
	}
	if (m == 11)
	{
		for (int i = 1 ; i <= n ; i++)
			for (int j = i+1 ; j <= n ; j++)
				for (int k = j+1 ; k <= n ; k++)
					for (int p = k+1 ; p <= n ; p++)
						for (int q = p+1 ; q <= n ; q++)
							for (int b = q+1 ; b <= n ; b++)
								for (int c = b+1 ; c <= n ; c++)
									for (int d = c+1 ; d <= n ; d++)
										for (int e = d+1 ; e <= n ; e++)
											for (int f = e+1 ; f <= n ; f++)
												for (int g = f+1 ; g <= n ; g++)
													maxn = max(maxn , a[i]&a[j]&a[k]&a[p]&a[q]&a[b]&a[c]&a[d]&a[e]&a[f]&a[g]);
		cout << maxn;
	}
	if (m == 12)
	{
		for (int i = 1 ; i <= n ; i++)
			for (int j = i+1 ; j <= n ; j++)
				for (int k = j+1 ; k <= n ; k++)
					for (int p = k+1 ; p <= n ; p++)
						for (int q = p+1 ; q <= n ; q++)
							for (int b = q+1 ; b <= n ; b++)
								for (int c = b+1 ; c <= n ; c++)
									for (int d = c+1 ; d <= n ; d++)
										for (int e = d+1 ; e <= n ; e++)
											for (int f = e+1 ; f <= n ; f++)
												for (int g = f+1 ; g <= n ; g++)
													for (int h = g+1 ; h <= n ; h++)
														maxn = max(maxn , a[i]&a[j]&a[k]&a[p]&a[q]&a[b]&a[c]&a[d]&a[e]&a[f]&a[g]&a[h]);
		cout << maxn;
	}
	if (m == 13)
	{
		for (int i = 1 ; i <= n ; i++)
			for (int j = i+1 ; j <= n ; j++)
				for (int k = j+1 ; k <= n ; k++)
					for (int p = k+1 ; p <= n ; p++)
						for (int q = p+1 ; q <= n ; q++)
							for (int b = q+1 ; b <= n ; b++)
								for (int c = b+1 ; c <= n ; c++)
									for (int d = c+1 ; d <= n ; d++)
										for (int e = d+1 ; e <= n ; e++)
											for (int f = e+1 ; f <= n ; f++)
												for (int g = f+1 ; g <= n ; g++)
													for (int h = g+1 ; h <= n ; h++)
														for (int l = h+1 ; l <= n ; l++)
															maxn = max(maxn , a[i]&a[j]&a[k]&a[p]&a[q]&a[b]&a[c]&a[d]&a[e]&a[f]&a[g]&a[h]&a[l]);
		cout << maxn;
	}
	if (m == 14)
	{
		for (int i = 1 ; i <= n ; i++)
			for (int j = i+1 ; j <= n ; j++)
				for (int k = j+1 ; k <= n ; k++)
					for (int p = k+1 ; p <= n ; p++)
						for (int q = p+1 ; q <= n ; q++)
							for (int b = q+1 ; b <= n ; b++)
								for (int c = b+1 ; c <= n ; c++)
									for (int d = c+1 ; d <= n ; d++)
										for (int e = d+1 ; e <= n ; e++)
											for (int f = e+1 ; f <= n ; f++)
												for (int g = f+1 ; g <= n ; g++)
													for (int h = g+1 ; h <= n ; h++)
														for (int l = h+1 ; l <= n ; l++)
															for (int o = l+1 ; o <= n ; o++)
																maxn = max(maxn , a[i]&a[j]&a[k]&a[p]&a[q]&a[b]&a[c]&a[d]&a[e]&a[f]&a[g]&a[h]&a[l]&a[o]);
		cout << maxn;
	}
	if (m == 15)
	{
		for (int i = 1 ; i <= n ; i++)
			for (int j = i+1 ; j <= n ; j++)
				for (int k = j+1 ; k <= n ; k++)
					for (int p = k+1 ; p <= n ; p++)
						for (int q = p+1 ; q <= n ; q++)
							for (int b = q+1 ; b <= n ; b++)
								for (int c = b+1 ; c <= n ; c++)
									for (int d = c+1 ; d <= n ; d++)
										for (int e = d+1 ; e <= n ; e++)
											for (int f = e+1 ; f <= n ; f++)
												for (int g = f+1 ; g <= n ; g++)
													for (int h = g+1 ; h <= n ; h++)
														for (int l = h+1 ; l <= n ; l++)
															for (int o = l+1 ; o <= n ; o++)
																for (int r = o+1 ; r <= n ; r++)
																	maxn = max(maxn , a[i]&a[j]&a[k]&a[p]&a[q]&a[b]&a[c]&a[d]&a[e]&a[f]&a[g]&a[h]&a[l]&a[o]&a[r]);
		cout << maxn;
	}
	if (m == 16)
	{
		for (int i = 1 ; i <= n ; i++)
			for (int j = i+1 ; j <= n ; j++)
				for (int k = j+1 ; k <= n ; k++)
					for (int p = k+1 ; p <= n ; p++)
						for (int q = p+1 ; q <= n ; q++)
							for (int b = q+1 ; b <= n ; b++)
								for (int c = b+1 ; c <= n ; c++)
									for (int d = c+1 ; d <= n ; d++)
										for (int e = d+1 ; e <= n ; e++)
											for (int f = e+1 ; f <= n ; f++)
												for (int g = f+1 ; g <= n ; g++)
													for (int h = g+1 ; h <= n ; h++)
														for (int l = h+1 ; l <= n ; l++)
															for (int o = l+1 ; o <= n ; o++)
																for (int r = o+1 ; r <= n ; r++)
																	for (int s = r+1 ; s <= n ; s++)
																		maxn = max(maxn , a[i]&a[j]&a[k]&a[p]&a[q]&a[b]&a[c]&a[d]&a[e]&a[f]&a[g]&a[h]&a[l]&a[o]&a[r]*a[s]);
		cout << maxn;
	}	
	if (m == 17)
	{
		for (int i = 1 ; i <= n ; i++)
			for (int j = i+1 ; j <= n ; j++)
				for (int k = j+1 ; k <= n ; k++)
					for (int p = k+1 ; p <= n ; p++)
						for (int q = p+1 ; q <= n ; q++)
							for (int b = q+1 ; b <= n ; b++)
								for (int c = b+1 ; c <= n ; c++)
									for (int d = c+1 ; d <= n ; d++)
										for (int e = d+1 ; e <= n ; e++)
											for (int f = e+1 ; f <= n ; f++)
												for (int g = f+1 ; g <= n ; g++)
													for (int h = g+1 ; h <= n ; h++)
														for (int l = h+1 ; l <= n ; l++)
															for (int o = l+1 ; o <= n ; o++)
																for (int r = o+1 ; r <= n ; r++)
																	for (int s = r+1 ; s <= n ; s++)
																		for (int t = s+1 ; t <= n ; t++)
																			maxn = max(maxn , a[i]&a[j]&a[k]&a[p]&a[q]&a[b]&a[c]&a[d]&a[e]&a[f]&a[g]&a[h]&a[l]&a[o]&a[r]*a[s]&a[t]);
		cout << maxn;
	}	
	if (m == 18)
	{
		for (int i = 1 ; i <= n ; i++)
			for (int j = i+1 ; j <= n ; j++)
				for (int k = j+1 ; k <= n ; k++)
					for (int p = k+1 ; p <= n ; p++)
						for (int q = p+1 ; q <= n ; q++)
							for (int b = q+1 ; b <= n ; b++)
								for (int c = b+1 ; c <= n ; c++)
									for (int d = c+1 ; d <= n ; d++)
										for (int e = d+1 ; e <= n ; e++)
											for (int f = e+1 ; f <= n ; f++)
												for (int g = f+1 ; g <= n ; g++)
													for (int h = g+1 ; h <= n ; h++)
														for (int l = h+1 ; l <= n ; l++)
															for (int o = l+1 ; o <= n ; o++)
																for (int r = o+1 ; r <= n ; r++)
																	for (int s = r+1 ; s <= n ; s++)
																		for (int t = s+1 ; t <= n ; t++)
																			for (int u = t+1 ; u <= n ; u++)
																				maxn = max(maxn , a[i]&a[j]&a[k]&a[p]&a[q]&a[b]&a[c]&a[d]&a[e]&a[f]&a[g]&a[h]&a[l]&a[o]&a[r]*a[s]&a[t]*a[u]);
		cout << maxn;
	}	
	if (m == 19)
	{
		for (int i = 1 ; i <= n ; i++)
			for (int j = i+1 ; j <= n ; j++)
				for (int k = j+1 ; k <= n ; k++)
					for (int p = k+1 ; p <= n ; p++)
						for (int q = p+1 ; q <= n ; q++)
							for (int b = q+1 ; b <= n ; b++)
								for (int c = b+1 ; c <= n ; c++)
									for (int d = c+1 ; d <= n ; d++)
										for (int e = d+1 ; e <= n ; e++)
											for (int f = e+1 ; f <= n ; f++)
												for (int g = f+1 ; g <= n ; g++)
													for (int h = g+1 ; h <= n ; h++)
														for (int l = h+1 ; l <= n ; l++)
															for (int o = l+1 ; o <= n ; o++)
																for (int r = o+1 ; r <= n ; r++)
																	for (int s = r+1 ; s <= n ; s++)
																		for (int t = s+1 ; t <= n ; t++)
																			for (int u = t+1 ; u <= n ; u++)
																				for (int v = u+1 ; v <= n ; v++)
																					maxn = max(maxn , a[i]&a[j]&a[k]&a[p]&a[q]&a[b]&a[c]&a[d]&a[e]&a[f]&a[g]&a[h]&a[l]&a[o]&a[r]*a[s]&a[t]*a[u]*a[v]);
		cout << maxn;
	}
	if (m>20) cout << 91;
	return 0;
}
