#include <iostream>

using namespace std;

int main()
{
	freopen("travel78.in","r",stdin);
	freopen("travel78.out","w",stdout);
	string ca,cb,da,db;
	cin>>ca>>cb>>da>>db;
	long long acl=0,ap=0,ac=0,az=0;
	long long bcl=0,bp=0,bc=0,bz=0;
	acl=ca[1]-'0';
	if (ca[0]=='1')
	{
		acl+=10;
	}
	ap=cb[1]-'0';
	if (cb[0]=='1')
	{
		ap+=10;
	}
	if (cb[2]=='A')
	{
		az=1;
		ac=0;
	}
	else if (cb[2]=='B')
	{
		az=2;
		ac=0;
	}
	else if (cb[2]=='C')
	{
		az=3;
		ac=0;
	}
	else if (cb[2]=='D')
	{
		az=4;
		ac=1;
	}
	else
	{
		az=5;
		ac=1;
	}
	
	
	bcl=da[1]-'0';
	if (da[0]=='1')
	{
		bcl+=10;
	}
	bp=db[1]-'0';
	if (db[0]=='1')
	{
		bp+=10;
	}
	if (db[2]=='A')
	{
		bz=1;
		bc=0;
	}
	else if (db[2]=='B')
	{
		bz=2;
		bc=0;
	}
	else if (db[2]=='C')
	{
		bz=3;
		bc=0;
	}
	else if (db[2]=='D')
	{
		bz=4;
		bc=1;
	}
	else
	{
		bz=5;
		bc=1;
	}
	string ans="";
	if (acl==bcl)
	{
		ans+='1';
		if (ap==bp)
		{
			ans+='1';
			if (ac==bc)
			{
				ans+='1';
				if (az==bz-1 || bz==az-1)
				{
					ans+='1';
				}
				else
				{
					ans+='0';
				}
			}
			else
			{
				ans+="00";
			}
		}
		else
		{
			ans+="000";
		}
	}
	else
	{
		ans+="0000";
	}
	cout<<ans;
	return 0;
}
