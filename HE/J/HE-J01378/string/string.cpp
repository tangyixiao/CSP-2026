#include <bits/stdc++.h>
using namespace std;
string a;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	int cnt=0;
	for(int i=1;i<=n;i++)
	{
		long long num;
		string ans;
		cin >> num >> ans;
		for(int i=1;i<=num;i++)
		{
			a+=ans;
		}
	}
	for(int i=0;i<=n-1;i++)
	{
		if(a[i]!=a[n-1-i])
		{
			cnt++;
		}
	}
	cout << cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
