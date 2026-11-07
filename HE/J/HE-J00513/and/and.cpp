#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	int n,m,a[10000000],minn=0;
	 cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if((a[i]&a[j])>minn)
			{
				minn=a[i]&a[j];
			}
		}
	}
	cout<<minn;
	return 0;
}
