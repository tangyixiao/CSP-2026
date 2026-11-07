#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,s=0;
	cin >> n >> m;
	int a[200005]={0};
	bool f13=1;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		if(m == 1)
		{
			s = max(s,a[i]);
			continue;
		}
		else if(m == n)
		{
			s = s & a[i];
			continue;
		}
		
	}
	if(m == 2)
	{
		for(int i = 0; i < n; i++)
		{
			for(int j = i+1; j < n; j++)
			{
				s = max(s,a[i]&a[j]);
			}
		}
	}
	if(m == 1 || m == n || m == 2)
	{
		cout << s;
		return 0;
	}
	
	sort(a,a+n,greater<int>());
	cout << a[m-1];
	return 0;
}