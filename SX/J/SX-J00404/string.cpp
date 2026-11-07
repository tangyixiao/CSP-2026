#include <bits/stdc++.h>
using namespace std;
int a[1000006],b[1000005];
int main()
{
	freopen("string.in","r","stdin")
	freopen("string.out","w","stdout")
	int n,x,y,cnta = 0,cntb = 0;
	cin >> n;
	for(int i = 1;i <= n;i++)
	{
		cin >> x >> y;
		a[i] = x;
		b[i] = y;
	}
	for(int i = 1;i <= n;i++)
	{
		cnta += a[i];
		if(b[i] = b[i+1])
			cnta += a[i+1];
		cntb += a[n];
		if(b[n] = b[n-i])
			cntb += a[n-i];
	}
	if(cnta == cntb)
		cout << 0;
	else
		cout << min(cnta,cntb);
	return 0;
}