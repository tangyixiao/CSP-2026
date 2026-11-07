#include<bits/stdc++.h>
using namespace std;
int n,m;
long sum;
string a,tmp;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>m>>tmp;
		a+=tmp[0]*m;
	}
	long c=sizeof(a);
	for(int i=0;i<=c/2;i++)
	{
		if(a[i]!=a[c-i])
		{
			sum++;
			a[i]=a[c-i];
		}
	}
	cout<<sum;
	return 0;
}
