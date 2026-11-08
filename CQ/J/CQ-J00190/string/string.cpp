#include <bits/stdc++.h>
using namespace std;
int n, b, cnt, cntnt;
int a[10000005];
char c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	cnt = 0;
	for(int i = 1;i <= n;i++)
	{
		cin >> b >> c;
		for(int i = cntnt;i <= cntnt + b;i++)
		{
			a[i] = c;
		}
		cntnt += b;
	}
	for(int i = 1;i <= cntnt / 2;i++)
	{
		if(a[i] != a[cntnt - i + 1])
			cnt++;
	}
	cout << cnt;
	return 0;
}
