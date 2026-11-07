#include <bits/stdc++.h>
using namespace std;
int a[1000000];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for (int i=1;i<=n+1;i++)
	{
		int ai;
		string ci;
		cin>>ai>>ci;
		for (int j=1;j<=ai;j++)
		{
			string s+=ai*ci;
		}
		for (int i=0;i<s.length();i++)
		{
			string a=i;
		}
		for (int j=s.length()-1;j>=0;j--)
		{
			string b=j;
		}
		if (a==b)
		{
			cout<<0;
			break;
		}
		else
		{
            cout<<s.length()/2;
            break;
		}
	}
	return 0;
}
