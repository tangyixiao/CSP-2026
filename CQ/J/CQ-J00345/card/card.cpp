#include<bits/stdc++.h>
using namespace std;
int n,m,a,p;
int c[500005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin >> a;
		c[i]=a;
		for(int j=0;j<i;j++)
		{
			if(c[j]==a&&i+1>=n)
			{
				cout <<n;
			}
			else
			{
				cout << i;
			}
		}
	}

	
}

