#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long a,b,c,d=0,e=0;
	cin>>a>>b;
	for (int i=1;i<=a;i++)
	{
		if (d==c)
		{
			e++;
		}
		cin>>c;
		d=c;
	}
	return 0;
}
