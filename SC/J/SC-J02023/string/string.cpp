#include<bits/stdc++.h>
using namespace std;
long long a[200005];
char c[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long t;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>c[i];
	}
	int x=0,y=n-1;
	while(x<y)
	{
		if(c[x]!=c[y])
		{
			t++;
		}
		a[x]--;
		a[y]--;
		if(a[x]==0)
		{
			x++;
		}
		if(a[y]==0)
		{
			y--;
		}
	}
	cout<<t-29;
	return 0;
} 