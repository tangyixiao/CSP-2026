#include<bits/stdc++.h>
using namespace std;
long long m,n,a[500005],b[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>m>>n;
	for(long long i=1;i<=m;i++)
	{
		cin>>a[i];
	}
	if(n==2)
	{
		long long h=a[1];
		b[a[1]]++;
		for(long long i=2;i<=m;i++)
		{
			if(a[i]==h)
			{
				b[a[i]]++;
				h=a[i];
			}
			else
			{
				b[a[i]]++;
				b[h]++;
			}
		}
		cout<<b[1]<<" "<<b[2];
	 } 
	 else if(n==1)
	 {
	 	cout<<m; 
	 }
	return 0;
} 
