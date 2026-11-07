#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,a[200005],f=0;
	string b[200005];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
		if(b[i]!=b[0])
		{
			f=1;
		}
	}
	cout<<f;
	return 0;
}