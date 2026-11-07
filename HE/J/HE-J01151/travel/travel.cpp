#include <bits/stdc++.h>
#define ll long long
using namespace std;
string c1,s1,c2,s2;
signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 != c2)
	{
		cout << "0000";
		return 0;
	}
	cout << "1";
	if(s1[0] != s2[0] || s1[1] != s2[1])
	{
		cout << "000";
		return 0;
	}
	cout << 1;
	if(s1[2] >= 'A' && s1[2] <= 'C')
	{
		if(s2[2] == 'E' || s2[2] == 'D') {
			cout << "00";
			return 0;
		}
	}
	if(s2[2] >= 'A' && s2[2] <= 'C')
	{
		if(s1[2] == 'E' || s1[2] == 'D')
		{
			cout << "00";
			return 0;
		}
	}
	int s = (int) (s1[2] - s2[2]);
	if(s == -1 || s == 1)
	{
		cout << "11";
	}else cout << "10";
	return 0;
}
