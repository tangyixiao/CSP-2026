#include<bits/stdc++.h> 
using namespace std;
long long n,m,ma=0,a[300001]={},bj,bj2;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]>ma)
		{
			ma=a[i];
		}
	}
	cout<<ma;
}
