//图灵保佑我 中华人民共和国河北省沧州市第十七中学 JHC 
#include<bits/stdc++.h>
using namespace std;
long long n,t,ans=0,len,x;
string s,s1;
char c;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>t>>c;
		for(int j=1;j<=t;++j)
		{
			s+=c;
		}
	}
	s1+=s;
	reverse(s1.begin(),s1.end());
	if(s1==s) 
	{
		cout<<0;
		return 0;
	}
	len=s.size();
	for(int i=0;i<len;++i)
	{
		if(s[i]!=s1[i])
		{
			x++;
		}
	}
	cout<<x/2;
	return 0;
}
