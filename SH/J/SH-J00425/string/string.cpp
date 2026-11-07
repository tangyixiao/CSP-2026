#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s="";
	for (int i=1;i<=n;i++)
	{
		int a;
		string c;
		cin>>a>>c;
		for (int j=1;j<=a;j++)
		{
			s+=c;
		}
	}
	int num=s.length(),ans=0;
	if (num%2==0)
	{
		for (int i=0;i<num/2;i++)
		{
			if (s[i]!=s[num-i-1])
			{
				ans++;
			}
		}
	}
	else
	{
		for (int i=0;i<num/2;i++)
		{
			if (s[i]!=s[num-i-1])
			{
				ans++;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
