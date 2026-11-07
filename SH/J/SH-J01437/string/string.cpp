#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,ans=0;
	string s=" ";
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		int a;
		char c;
		cin>>a>>c;
		for (int i=1;i<=a;i++)
		{
			s+=c;
		}
	}
	//cout<<s<<endl;
	int len=s.size();
	len--;
	//cout<<len<<endl;
	for (int i=1;i<=len/2;i++)
	{
		//cout<<i<<s[i]<<s[len-i+1]<<endl;
		if (s[i]!=s[len-i+1])
		{
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
