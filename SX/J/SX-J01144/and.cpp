#include<bits/stdc++.h>
using namespace std;
long long a,b,c[1000000],d,u;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>a>>b;
	for(int i=1;i<=a;i++)
	{
		cin>>c[i];
		d=max(d,c[i]);
	}
	cout<<d;
	return 0;
}