#include <bits/stdc++.h>
using namespace std;

#define int long long

struct node{
	int cnt, l, r;
	char c;
}a[200005], b[200005];

int sum_z[200005], sum_d[200005];
int n;

void work()
{
	string t = "";
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= a[i].cnt; j++)
		{
			t += a[i].c;
		}
	}
	string s = t;
	reverse(s.begin(), s.end());
	int cnt = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if(s[i] != t[i]) 
		{
 			cnt++;
		}
	}
	cout << cnt / 2 << endl;
	return;
}

signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i].cnt >> a[i].c;
		sum_z[i] = sum_z[i - 1] + a[i].cnt;
		a[i].l = sum_z[i - 1] + 1;
		a[i].r = sum_z[i];
	}
	if(sum_z[n] <= 2000 * 50)
	{
		work();
		return 0;
	}
    for (int i = 1; i <= n; i++) 
    {
    	b[i].cnt = a[n - i + 1].cnt;
    	b[i].c = a[n - i + 1].c;
    	sum_d[i] = sum_d[i - 1] + b[i].cnt;
    	b[i].l = sum_d[i - 1] + 1;
		b[i].r = sum_d[i]; 
	}
	int cur_a = 1, cur_b = 1, ops = 1;
	int ans = 0; 
	while(cur_a <= n && cur_b <= n)
	{
		bool dif = false;
		if(a[cur_a].c != b[cur_b].c) dif = true;
		if(a[cur_a].r == b[cur_b].r)
		{
			ans += (a[cur_a].r - ops + 1) * (dif == true);
			ops = a[cur_a].r + 1;
			cur_a++;
			cur_b++;
		}
		else if(a[cur_a].r < b[cur_b].r)
		{
			if(dif == true) ans += (a[cur_a].r - ops + 1);
			ops = a[cur_a].r + 1;
			cur_a++;
		}
		else 
		{
			if(dif == true) ans += (b[cur_b].r - ops + 1);
			ops = b[cur_b].r + 1;
			cur_b++; 
		}
	}
	cout << ans / 2;
	return 0;
}