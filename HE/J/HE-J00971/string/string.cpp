#include <iostream>
using namespace std;
int n;
long long a[200005],ans = 0;
char c[200005];
string s = "";
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.in","w",stdout);
	cin >> n;
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i] >> c[i];
		for (int j = 1;j <= a[i];j++)
		{
			s += c[i];
		}
	}
	long long sum = s.size() - 1;
	for (int i = 0;i <= sum / 2;i++)
	{
		if (s[i] != s[sum - i])
		{
			ans++;
		}
	}
	cout << ans;
	return 0;
}
