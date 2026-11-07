#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;
struct stra
{
	long long num;
	char ch;
}a[200005];
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long al[26] = {0}, mx = -1, l = 0, cnt = 0;
	char mxc;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		char c;
		long long x;
		int cd;
		cin >> x >> c;
		cd = c - 'a';
		a[i].num = x;
		a[i].ch = c;
		al[cd] += x;
		l += x;
		if(al[cd] > mx)
		{
			mx = al[cd];
			mxc = c;
		}
	}
	for(int i = 0; i < n; i++)
		if(a[i].ch != mxc)
			cnt += a[i].num;
	cout << cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
}