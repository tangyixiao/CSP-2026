#include<bits/stdc++.h>
using namespace std;
string s;
long long wei=-1;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		long long a;
		char b;
		cin>>a>>b;
		while(a--)
		{
			wei++;
			s[wei]=b;
		}
	}
	//cout<<s<<" ";
	string ans1="",ans2="";
	long long cnt=0;
	for(int i=wei;i>=(wei+1)/2;i--)
	{
		ans1+=s[i];
	}
	for(int i=0;i<=wei/2;i++)
	{
		ans2+=s[i];
	}
	//cout<<ans1<<" "<<ans2<<endl;
	if(ans1==ans2)
	{
		cout<<0;
		return 0;
	}
	else
	{
		for(int i=0;i<wei;i++)
		{
			if(ans1[i]!=ans2[i])
			{
				cnt++;
			}
		}
	}
	cout<<cnt;
}
