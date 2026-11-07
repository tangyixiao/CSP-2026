#include <bits/stdc++.h>
using namespace std;
long long n,a,ans=0;
string c,d,s,f;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--)
	{
		cin>>a;
		ans+=a;
		for(int j=1;j<a;j++)
		{
			cin>>c;
			d+=c;
		}
	}
	for(int i=ans;i<=1;i--)
	{
		s+=c;
	}
	if(d==c)
		cout<<0;
	else
		cout<<ans/2;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

