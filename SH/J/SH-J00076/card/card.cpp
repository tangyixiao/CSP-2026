#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	long long a[n + 5] = {0},cnt[m + 5] = {0};
	for (int i = 0;i < n;i++)
	{
		cin >> a[i];
	}
	string s = "";
	for (int i = 0;i < n;i++)
	{
		int now = 0;
		for (int j = i;j < n;j++)
		{
			s += (a[j] + '0');
			bool f = true;
			for (int k = 0;k < s.length() - 1;k++)
			{
				if (s[k] == a[j] + '0' && k < j)
				{
					f = false;
					now = k;
					break;
				}
			}
			if (f == false)
			{
				string s2 = "";
				for (int k = 0;k < s.length() - 1;k++)
				{
					if (k >= now)
					{
						continue;
					}
					s2 += s[k];
				}
				s = s2;
				s += (a[j] + '0');
				now = 0;
			}
		}
		for (int j = 0;j < s.length();j++)
		{
			cnt[s[j] - '0']++;
		}
		s = "";
	}
	for (int i = 1;i <= m;i++)
	{
		cout << cnt[i] << " ";
	}
	return 0;
}
