#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string n,m,k,f;
	char a,b;
	cin>>n>>m>>k>>f;
	ll sum=0,sum1=0;
	if(n!=k)
	{
		cout<<"0000";
		return 0;
	}
	if(n==k)
	{
		cout<<1;
	}
	for(ll i=0;i<m.size();i++)
	{
		if(m[i]=='0')
		{
			continue;
		}
		else if(m[i]>='1'&&m[i]<='9')
		{
			sum=sum*10+ll(m[i]-'0');
		}
		else
		{
			a=m[i];
		}
	}
	for(ll i=0;i<f.size();i++)
	{
		if(f[i]=='0')
		{
			continue;
		}
		else if(f[i]>='1'&&f[i]<='9')
		{
			sum1=sum1*10+ll(f[i]-'0');
		}
		else
		{
			b=f[i];
		}
	}
	if(sum==sum1)
	{
		cout<<1;
		if((a<='C'&&b<='C')||(a>'C'&&a<='F'&&b>'C'&&b<='F'))
		{
			cout<<1;
			ll aa=a-'0',bb=b-'0';
			if(abs(aa-bb)==1)
			{
				cout<<1;
			}
			else
			{
				cout<<0; 
			}
		}
		else
		{
			cout<<"00";
			return 0;
		}
	}
	else
	{
		cout<<"000";
		return 0;
	}
	return 0;	
} 