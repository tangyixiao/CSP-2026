#include <bits/stdc++.h>
using namespace std;
long long n;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	int l = 0;
	for(int i = 1; i <= n; i++)
	{
		long long x;
		char y;
		cin >> x >> y;
		for(int i = 1; i <= x; i++)
		{
			s += y;
			l++;
		}
	}
	long long left = 0,right = s.size() - 1;
	long long ans = 0;
	while(left <= right)
	{
		if(s[left] != s[right]) ans++;
		left++,right--;
	}
	cout << ans;
	fclose(stdout);
	fclose(stdin);
	return 0;
}
