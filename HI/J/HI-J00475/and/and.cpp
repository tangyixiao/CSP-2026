#include<bits/stdc++.h>
using namespace std;
int a[2000000];
int main()
{
	freopen("and.in","w",stdin);
	freopen("and.out","r",stdout);

	int n=0,m=0,minn=0;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	/*r(int i=0;i<n+1;i++)
	{
		minn=3000000;
		for(int j=0;j<m;j++)
		{
			if(minn>a[j])
			{
				minn=a[j];
			}
		}
		
	}
	*/
	cout<<a[n-1];
	return 0;
}
