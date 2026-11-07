#include<bits/stdc++.h>
using namespace std;

int a[27];
char s[27];

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n ;
	string c,d;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i] >> s[i] ;
		if (n%2==0)
		{
			if (i<=n/2)
			{
				c+=s[i];
			}
			else
			{
				d+=s[i];	
			}
		}
		else
		{
			if (i<=(n-1)/2)
			{
				c+=s[i];
			}
			else if (i>(n+1)/2)
			{
				d+=s[i];	
			}
		}
		if (c==d)
		{
			cout << 0 ;
		}
	}
	return 0;
}