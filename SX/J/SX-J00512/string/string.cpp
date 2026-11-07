#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PII pair<int,int>
const int N = 2e5+10;

int n;
deque<PII> q;
int sum;
int ans;

signed main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++)
		{
			int num;
			char c;
			cin >> num >> c;
			q.push_back({num, c});
			sum += num;
		}
	//if(sum%2==0)sum/=2;
	//else sum=sum/2+1;
	sum /= 2;
	while (!q.empty())
		{
			auto tmp1 = q.front();
			q.pop_front();
			int nn = tmp1.first;
			char cc = tmp1.second;
			if (q.empty())
				{
					break;
				}
			if (nn < sum)
				{
					sum -= nn;
					int len = 0;
					while (len < nn)
						{
							auto tmp2 = q.back();
							int num = tmp2.first;
							char c = tmp2.second;
							q.pop_back();
							if (num <= (nn - len))
								{
									len += num;
									if (c != cc)
										{
											ans += num;
										}
								}
							else
								{
									num = num - (nn - len);
									if (c != cc)
										{
											ans += nn - len;
										}
									q.push_back({num, c});
									break;
								}
						}
				}
			else
				{
					int pun = nn - sum;
					nn = sum;
					q.push_front({pun, cc});
					int len = 0;
					while (len < nn)
						{
							auto tmp2 = q.back();
							int num = tmp2.first;
							char c = tmp2.second;
							q.pop_back();
							if (num <= (nn - len))
								{
									len += num;
									if (c != cc)
										{
											ans += num;
										}
								}
							else
								{
									num = num - (nn - len);
									if (c != cc)
										{
											ans += nn - len;
										}
									q.push_back({num, c});
									break;
								}
						}

					//break;
				}
		}
	cout << ans;
	return 0;
}
