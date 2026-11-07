#include<bits/stdc++.h>
using namespace std;
int a[100000005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int ma=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		for(int j=0;j<i;j++)
		{
			int cnt=a[j];
			for(int k=1;k<m;k++)
			{
				ma=max(a[j+k]&cnt,ma);
			}
		}
	}
	cout<<ma;
	return 0;
}
