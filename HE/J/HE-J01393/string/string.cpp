#include<bits/stdc++.h>
using namespace std;
int n,a[200010],mx=-1,sum,ma[200010];
char c[200010],p;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	if(n==1)
	{
		cout<<0;
		return 0;
	}
	if(n==2)
	{
		if(c[1]==c[2])cout<<0;
		else cout<<min(a[1],a[2]);
		return 0;
	}
	bool niko=true;
	for(int i=2;i<=n;i++)
	{
		if(c[i]!=c[i-1])niko=false;
	}
	if(niko)cout<<0;
	else 
	{
		cout<<sum/2;
	}
	return 0;
}
