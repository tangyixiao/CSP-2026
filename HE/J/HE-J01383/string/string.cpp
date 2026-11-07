#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a,m=0;
	cin>>n;
	string b="";
	for (int i=1;i<=n;i++)
	{
		string c;
		cin>>a>>c;
		for(int i=1;i<=a;i++)
		{
			b+=c;
		}
		m+=a;
	}
	int num=0;
	for (int i=0;i<=m/2-1;i++)
	{
		if(b[i]!=b[m-i-1])
		{
			num+=1;
		}
	}
	cout<<num;
	return 0;
}
