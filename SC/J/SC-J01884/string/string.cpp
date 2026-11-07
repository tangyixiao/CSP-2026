#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,m[100010],s=0,x=0,c=0;
	string a;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>m[i]>>a[i];
		x+=m[i];
	}
	for(int j=n;j>0;j--)
		for(int i=0;i<n;i++)
		{
			if(m[i]!=m[j]&&m[i]>m[j])
			{
				m[i]=m[j];
				s+=m[j];
				c=x-s;
			}
			if(m[i]!=m[j]&&m[i]<m[j])
			{
				m[j]=m[i];
				s+=m[i];
				c=x-s;
			}
		}
	cout<<c/2;
	return 0;
 } 