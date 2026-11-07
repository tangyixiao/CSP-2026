#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	char c[200002];	
	long long a[200002];
	long long ans=0,m=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		m+=a[i];
	}	
	long long i=1,j=n,step=0;
	while(step<m)
	{
		
		if(a[i]!=0) 
		{
			a[i]--;
			step++;
		}
		else i++;
		if(a[j]!=0)
		{
			a[j]--;
			step++;	
		}
		else j--;
		if(c[i]!=c[j])  ans++;
	}
	cout<<ans;
	return 0;
}