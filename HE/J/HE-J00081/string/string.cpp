#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	string a;
	for(int i = 1;i <= n;i ++)
	{
		int x;
		char y;
		cin >> x >> y;
		for(int j = 1;j <= x;j ++) a += y;
	}
	string l = a;
	reverse(a.begin(),a.end());
	int sum = 0;
	for(int i = 0;i < a.size();i ++)
	{
		if(l[i] != a[i]) sum ++;
	}
	cout << sum / 2;
	return 0;
}
