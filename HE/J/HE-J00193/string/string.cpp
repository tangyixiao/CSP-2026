#include <bits/stdc++.h>
using namespace std;
int n;
char c[200005];
long long a[200005],b;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
	}
	int l=1,r=n;
	while(l<r)
	{
		if(c[l]!=c[r])
		{
			b++;
		}
		a[l]--;
		a[r]--;
		if(a[l]==0)
			l++;
		if(a[r]==0)      
			r--;                                       
	}
	cout<<b;
	return 0;
}
