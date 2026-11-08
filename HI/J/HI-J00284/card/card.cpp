#include<bits/stdc++.h>
using namespace std;

int n,m,a[500005],b[500005],sum = 1;

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	for (int i = 1;i <= n;i++)
	{
		b[sum] = a[i];
		if (a[i] == a[i + 1])
		    sum--;
		sum++;
		cout << b[i]; 
	}
	for (int i = 1;i <= n;i++)
	    cout << i; 
	return 0;
}

