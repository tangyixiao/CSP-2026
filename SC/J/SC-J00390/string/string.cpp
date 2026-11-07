#include <bits/stdc++.h>
using namespace std;
string iakioi;
int c_ccf, idx;
long long fuckdean;
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int c_ccf, c;
	cin >> c_ccf;
	c = c_ccf;
	while(c--)
	{
		int v;
		char c;
		cin >> v >> c;
		for(int i = ++idx; i <= idx + v - 1; i++)
			iakioi[i] = c;
		idx = idx + v - 1;
	}
	for(int i = 1; i <= idx / 2; i++)
	{
		if(iakioi[i] != iakioi[idx - i + 1])
			fuckdean++;
	}
	cout << fuckdean;
	return 0;
}