#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","r",stdout);
	int s[200000],n,l=0;
	cin>>n;
	string v[200000],c=0;
	for(int i=1;i<=n;i++)
	{
		cin>>s[n]>>v[n];
		c=c+s[n]*v[n];
		l=l+s[n];
		if(l%2!=0)
		{
			if(c/2=c-c/2)
			cout<<"0";
		}
	}
	return 0;
}