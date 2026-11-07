/*#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n,a;
ll ans;
string s;
vector<ll> m(200005);
char c;
void gengxin()
{
	if(m[0]==0)
	{
		for(int i=1;i<s.length();i++) m[i-1]=m[i];
	}
}
int main()
{
	freopen("string4.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>c;
		s=s+c;
		m[i-1]=a;
	}
	while(s.length()>0)
	{
		if(s[0]==s[s.length()-1])
		{
			s.erase(0,1);
			s.erase(s.length()-1,1);
		}
		else
		{
			if(m[0]==m[s.length()-1])
			{
				ans+=m[0];
				m[0]=m[s.length()-1]=0;
				s.erase(0,1);
				s.erase(s.length()-1,1);
			}
			else if(m[0]>m[s.length()-1])
			{
				ans+=m[s.length()-1];
				m[0]=m[0]-m[s.length()-1];
				s.erase(s.length()-1,1);
			}
			else
			{
				ans+=m[0];
				m[0]=m[s.length()-1]-m[0];
				m[0]=0;
				s.erase(0,1);
			}
		}
		gengxin();
	}
	cout<<ans;
	return 0;
}*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n,a;
ll ans;
string s;
char c;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>c;
		for(int j=1;j<=a;j++) s+=c;
	}
	cout<<s<<endl;
	for(int i=0;i<=s.length()/2;i++)
	{
		if(s[i]!=s[s.length()-i-1])
		{
			ans++;
			cout<<s[i]<<" "<<s[s.length()-i-1]<<endl;
		}
	}
	cout<<ans;
	return 0;
}
