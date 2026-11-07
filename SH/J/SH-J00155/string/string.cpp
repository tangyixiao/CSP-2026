#include<bits/stdc++.h>
using namespace std;
long long n,ans;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		int a;
		string x;
		cin>>a>>x;
		while(a--)
		{
			s+=x;
		}
	}
	string s1=s;
	reverse(s1.begin(),s1.end());
	if (s1==s)
	{
		cout<<"0";
		return 0;
	}
	long long l=s.size();
	for (int i=0;i<l/2;i++)
	{
		if (s[i]!=s[l-i-1])
		{
			ans++;
		}
	}
	cout<<ans;
	return 0;
 } 
