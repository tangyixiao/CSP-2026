#include<bits/stdc++.h>
using namespace std;
long long a[30000000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	if(m == 1)
	{
		int bigg = -1;
		for(int i = 0;i < n;i++)
		{
			int x;
			cin >> x;
			if(x > bigg)
			{
				bigg = x;
			}
		}
		cout << bigg;
		return 0;
	}
	if(n <= 20&&m == 2)
	{
		for(int i = 0;i < n;i++)
		{
			cin >> a[i]; 
		}
		long long bigg = -1;
		for(int i = 0;i < n;i++)
		{
			for(int j = i+1;j < n;j++)
			{
				if(a[i] & a[j] > bigg)
				{
					bigg = a[i]&a[j];
				}
			}
		}
		cout <<bigg;
		return 0;
	}
	for(int i = 0;i < n;i++)
	{
		cin >> a[i]; 
	}
	sort(a,a+n);
	int p = a[n-1] & a[n-2] & a[n-3];
	cout << p;	
	return 0;
}
