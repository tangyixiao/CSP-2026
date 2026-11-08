#include <bits/stdc++.h>
using namespace std;
int n;
int cnt;
string s;
int main()
{
	cin >> n;
	for (int i=1;i<=n;i++)
	{
		int a;
		string q;
		cin >> a >> q;
		for (int i=1;i<=a;i++) s+=q;
	}
	int l=0,r=s.size()-1;
	while(l<r)
	{
		if (s[l]!=s[r]) cnt++;
		++l,--r;
		if (l==r) break;
	}
	cout << cnt;
	return 0;
}
