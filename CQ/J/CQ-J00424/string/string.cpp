#include <bits/stdc++.h>
using namespace std;
int n,cnt=0;
string l[10000005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int d=0;
	for(int i=1;i<=n;i++)
	{
		int s;
		cin>>s;
		string x;
		cin>>x;
		for(int j=1;j<=s;j++)
		{
			l[d+j]=x;
		}
		d+=s;
	}
	for(int i=1;i<=d;i++)
	{
		if(l[i]!=l[-i])
		{
			l[-i]=l[i];
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
