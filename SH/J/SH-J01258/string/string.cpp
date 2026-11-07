#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,cnt,k;
string s = " ";
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> k;
	for(int i = 1;i <= k;i++)
	{
		int x;
		string c;
		cin >> x >> c;
		m += x;
		for(int i = 1;i <= x;i++)
		{
			s = s + c;
		}
	}
	//cout << s << endl;
	n = m;
	if(m % 2 == 0)m /= 2;
	else m = (m / 2) + 1;
	for(int i = 1;i <= m;i++)
	{
		if(s[i] != s[n - i + 1])
		{
			cnt++;
			//cout << i;
		}
	}
	cout << cnt;
	return 0;
}
