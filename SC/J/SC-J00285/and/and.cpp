#include<iostream>
#include<string>
using namespace std;
int n1[200010];
int m1[200010];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>n1[i];
	}
	int max=0;
	for(int i=0;i<m;i++)
	{
		m1[i]=n1[0];
	}
	for(int i=0;i<m;i++)
	{
		for(int i1=0;i1<m;i1++)
		{
			m1[i]=n1[i1];
			int cn=m1[0];
			for(int j=1;j<m;j++)
			{
				cn=cn&m1[j];
			}
			if(cn>max)
			{
				max=cn;
			}
		}
	}
	cout<<max;
	return 0;
}