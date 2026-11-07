#include<bits/stdc++.h>
using namespace std;


int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string im;
	string tpa,spa,tpb,spb;
	cin>>tpa>>spa>>tpb>>spb;	

	if(tpa!=tpb)
	{
		cout<<"0000";
		return 0;
	}
	else
	{
		cout<<"1";
	}
	if(spa[0]==spb[0]&&spa[1]==spb[1])
	{
		cout<<"1";
	}
	else
	{
		cout<<"000";
		return 0;
	}
	if(spa[2]<='C'&&spb[2]<='C'||spa[2]>='D'&&spb[2]>='D')
	{
		cout<<"1";
	}
	else
	{
		cout<<"00";
		return 0;
	}
//	cout<<im[5]<<' '<<im[12]<<'\n';
	if(spa[2]!='C'&&spb[2]!='D'||spa[2]!='D'&&spb[2]!='C')
		if(spa[2]=='A'&&spb[2]=='B'||spa[2]=='B'&&spb[2]=='A')
		{
			cout<<"1";
		}
		else if(spa[2]=='B'&&spb[2]=='C'||spa[2]=='C'&&spb[2]=='B')
		{
			cout<<"1";
		}
		else if(spa[2]=='D'&&spb[2]=='E'||spa[2]=='E'&&spb[2]=='D')
		{
			cout<<"1";
		}
	else
	{
		cout<<"0";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
//02 01A 02 01B
