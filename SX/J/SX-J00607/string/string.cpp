#include <iostream>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	string ans = "";
	long long ans_size = 0;
	int m;
	string x;
	for (int i = 1;i <= n;i++)
	{
		cin >> m >> x;
		for (int j = 1;j <= m;j++)
		{
			ans += x;
		}
		ans_size += m;
	}
	ans_size--;
	long long cnt = 0;
	for (int i = 0;i < ans_size / 2 + 1;i++)
	{
		if (ans[i] != ans[ans_size - i])
		{
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}