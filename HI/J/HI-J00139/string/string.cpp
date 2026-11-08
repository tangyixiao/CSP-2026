#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].b>>a[i].c;
		for(int j=1;j<=a[i].b;j++)
		{
			s+=a[i].c;
		}
	}
	cout<<s.size()/2;
	
	return 0;
}
