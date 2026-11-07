#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, cnt, a[100010], c[100010], ans;
	//freopen("string.in", "r", "std.in");
	//freopen("string.out", "r", "std.out");
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i] >> c[i];
		cnt += a[i];
	}
	for(int i = 1; i <= cnt / 2; i++)
	{
		if(c[i] != c[cnt-i+1])
			ans++;
	}
	cout << cnt/2; 
}
