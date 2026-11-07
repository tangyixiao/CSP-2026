#include<bits/stdc++.h>
using namespace std;
long long a[1000005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[j]>a[j+1])
			{
				int k=a[j];
				a[j]=a[j+1];
				a[j+1]=k;
			}
		}
	}
	cout<<a[m];
	return 0;
}