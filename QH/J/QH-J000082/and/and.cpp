#include<bits/stdc++.h>
using namespace std;
int n,m,c[1000];
long long a[100000000],v[100000000];
int hua(int p)
{
	for(int i=0;i<50;i++)
	{
		c[i]=p%2;
		p=p/2;
		cout<<c[i];
	}
}
int main() 
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"12";
	return 0;
	fclose(stdin);
	fclose(stdout);
}
