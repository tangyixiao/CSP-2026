#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string r1,r2,x1,x2;
	cin>>r1>>r2>>x1>>x2;
	if(r1[0]==x1[0]&&r1[1]==x1[1]) cout<<"1";
	else 
	{
		cout<<"0000";
		return 0;
	}
	if(r1[0]==x1[0]&&r1[1]==x1[1]&&r2[0]==x2[0]&&r2[1]==x2[1]) cout<<"1";
	else
	{
		cout<<"000";
		return 0;
	}
	if(r1[0]==x1[0]&&r1[1]==x1[1]&&r2[0]==x2[0]&&r2[1]==x2[1])
	{
		if(r2[2]=='A'&&(x2[2]=='B'||x2[2]=='C')) 
		{
			cout<<"1";
			if(x2[2]=='B') cout<<"1";
			else cout<<"0";
		}
		else if(r2[2]=='B'&&(x2[2]=='A'||x2[2]=='C')) cout<<"11";
		else if(r2[2]=='C'&&(x2[2]=='A'||x2[2]=='B'))
		{
			cout<<"1";
			if(x2[2]=='B') cout<<"1";
			else cout<<"0";
		}
		else if(r2[2]=='D'&&x2[2]=='F') cout<<"11";
		else if(x2[2]=='D'&&r2[2]=='F') cout<<"11";
		else cout<<"00";
	}
	return 0;
}
//freopen shanzhushi!
//02 01A 02 01B     1111
//02 01C 02 01A     1110
//02 01C 02 01D     1100
//02 02B 02 01A     1000
//02 01A 03 01A     0000
