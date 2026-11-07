#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m=0;
	string s;
	cin >> n;
	s += ' ';
	for(int i=1;i<=n;i++)
	{
		int a;
		char c;
		cin >> a >> c;
		for(int j=1;j<=a;j++)
			s += c;
		m += a;
	}
	
	int l=1, r=m;
	int cnt = 0;
	while(l<=r)
	{
		if (s[l] != s[r])
			cnt++;
		l++; r--;
	}
	
	cout << cnt << "\n";
	return 0;
}