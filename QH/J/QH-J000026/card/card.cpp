#include<bits/stdc++.h>
using namespace std;

int main() 
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	int n, m;
	cin >>n >> m;
	for(int i=1; i<=n; i++)
	{
		cin >> a[i];
	}
	int k, sum=0;
	cin >> k;
	while(n>0)
	{
		if(k==a[i])
		{
			a[i+1] = a[i];
			n--;
		}
		sum++;
	}
	
	cout << sum;
	return 0;
}
