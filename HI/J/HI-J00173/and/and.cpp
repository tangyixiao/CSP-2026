#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n = 0,m = 0,s = 0;
	cin>>n>>m;
	for(int i = 1;i <= n;i++)
	{
		cin>>a[i];
		if(i == 1)
		{
			s = a[i];
			continue;
		}
		if(m != 0)
		{
			s = s&a[i];
		}
	}
	cout<<s;
	return 0;
}
