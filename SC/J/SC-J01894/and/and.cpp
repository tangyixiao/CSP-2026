#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n;
	cin>>n;
	int m;
	cin>>m;
	for(int i=0;i<n;i++)
	{
		int n1;
		cin>>n1;
		while(n1/2!=0)
		{
			a[i][100-i]=n1%2;
			n1=n1/2;
		}
	}
	for(int i=0;i<100;i++)
	{
		for(int j=i;j<100;j++)
		{
			for(int k=100;k<0;k--)
			{
				if(a[i][k]==a[j][k])
				{
					cout<<a[[i][k];
				}
			}
		}
	}
	return 0;
}