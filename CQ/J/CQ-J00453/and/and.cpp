#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
long long a[N],cnt[50],n,m;
string s[N];
bool cmp(string s11,string s12)
{
	for (int i = 0;i <= 31;i ++ )
	{
		if (s11[i] == s12[i]) continue;
		if (cnt[i] == m)
		{
			if (s11[i] == '1' && s12[i] == '0') return s11 > s12;	
			if (s11[i] == '0' && s12[i] == '1') return s12 > s11;
		}
	}
	return s11 > s12;
}
string f(long long x)
{
	string ans = "";
	while (x)
	{
		ans += (x % 2 + '0');
		x /= 2;
	}
	reverse(ans.begin(),ans.end());
	while (ans.size() < 31)
	{
		ans = '0' + ans;
	}
	return ans;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
//	int n,m;
	cin >> n >> m;
	for (int i = 1;i <= n;i ++ )
	{
		cin >> a[i];
		s[i] = f(a[i]);
	}
	sort(s + 1,s + 1 + n,cmp);
	for (int i = 0;i < 31;i ++ )
	{
		int sum1 = 0;
		for (int j = 1;j <= n;j ++ )
		{
			string xm = s[j];
			if (xm[i] == '1') sum1 ++;
		}
		cnt[i] = sum1;
		if (cnt[i] > m) cnt[i] = m;
//		cout << cnt[i];
	}
//	cout << endl;
//	for (int i = 1;i <= n;i ++ )
//	{
//		cout << s[i] << endl; 
//	}
	long long ans = 0;
	for (int i = 0,k = 30;i < 31;i ++,k -- )
	{
		int f33 = 1;
		for (int j = 1;j <= m;j ++ )
		{
			string x11 = s[j];
			if (x11[i] == '0') f33 = 0;
		}
		if (f33 == 1)
		{
			ans += pow(2,k);
		}
	}
	cout << ans;
}
