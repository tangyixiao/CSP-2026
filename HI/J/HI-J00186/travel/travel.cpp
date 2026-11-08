#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int aa,ab,ba=0,bb=0;
	char ca,cb;
	string sta,stb;
	cin>>aa>>sta>>ab>>stb;
	ca=sta[2];
	cb=stb[2];
	//cout<<ca<<cb;
	for(int i=0;i<2;i++)
	{
		ba*=10;
		bb*=10;
		ba+=sta[i]-'0';
		bb+=stb[i]-'0';
	}
	//cout<<ba<<bb;
	if(aa==ab)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	if(ba==bb)
	{
		cout<<"1";
	}
	else
	{
		cout<<"000";
		return 0;
	}
	if(ca<='C'&&cb<='C'||ca>'C'&&cb>'C')
	{
		if(ca>'C'&&cb>'C')
		{
			cout<<"11";
			return 0;
		}
		cout<<"1";
	}
	else
	{
		cout<<"00";
		return 0;
	}
	if(abs(ca-cb)<2)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
	return 0;
}
