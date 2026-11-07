#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	int n,m,sum=0;
	cin>>n>>m;
	int a[200000];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		for(int j=0;j<m;j++)
		{
			if(a[j+1]>a[j])
			{
				sum+=a[j+1];
			}
		}
	}
	cout<<sum;
	return 0;
}
