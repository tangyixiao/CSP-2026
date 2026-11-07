#include <bits/stdc++.h> 
using namespace std;
char a[100000000];
long long ans = 0,n,q,tot=0;
char c;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i<=n; i++)
	{
		cin >> q >> c;
		for(int j = 1; j<=q; j++)
		{
			a[++tot]=c;
		}
	}
	for(int i = 1; i<=tot/2; i++)
	{
		if(a[i]!=a[tot+1-i])ans++;
	}
	cout << ans;
	return 0;
}
