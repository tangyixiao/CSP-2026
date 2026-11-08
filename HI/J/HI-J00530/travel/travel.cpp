#include<iostream>
#define int long long
using namespace std;

signed main()
{
//	freopen("travel1.in","r",stdin);
//	freopen("travel1.out","w",stdout);
	string c,s,ct,st;cin>>c>>s>>ct>>st;
	if(c!=ct && s!=st)
	{
		cout<<"0000";
		
		return 0;
	}
	for(int i=1;i<=2;i++)
	{
//		string g=s%100;
//		string h=b%100;
		if(c==ct)
		{
			cout<<1;
		}
		else
		{
			cout<<0;
		}
		if(s[1]==st[1])
		{
			if(s[2]==st[2])
			{
				cout<<1;
			}
		}
		else
		{
			cout<<0;
		}
		char a=s[2];
		char b=st[2];
		if(a+1==b)
		{
			cout<<1;
		}
		else
		{
			cout<<0;
		}
	}
	return 0; 
}
