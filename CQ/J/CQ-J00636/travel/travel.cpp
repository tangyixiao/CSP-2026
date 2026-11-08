#include<bits/stdc++.h>
using namespace std;
string a,s,b,t;
int p[15],ans,cnt;
namespace did{
	int main()
	{
		freopen("travel.in","r",stdin);
		freopen("travel.out","w",stdout); 
		cin>>a;
		cin>>s;
		if(s[2]=='D'||s[2]=='F')ans=1;
		cin>>b;
		cin>>t;
		if(t[2]=='D'||t[2]=='F')cnt=1;
		p[1]=(a[0]-'0')*10+(a[1]-'0');
		p[2]=(s[0]-'0')*10+(s[1]-'0');
		p[3]=(b[0]-'0')*10+(b[1]-'0');
		p[4]=(t[0]-'0')*10+(t[1]-'0');
		if(p[1]!=p[3])
		{
			cout<<"0000";
			return 0;
		}
		cout<<"1";
		if(p[2]!=p[4])
		{
			cout<<"000";
			return 0;
		}
		cout<<"1";
		if(cnt!=ans)
		{
			cout<<"00";
			return 0;	
		}
		cout<<"1";
		if(ans==1)
		{
			cout<<"1";
			return 0;
		}
		if((s[2]=='A'&&t[2]=='C')||(s[2]=='C'&&t[2]=='A'))
		{
			cout<<"0";
			return 0;
		}
		cout<<"1";
		return 0;
	}
}
int main()
{
	did::main();
	return 0;
}
//¹À·Ö:100
//¸´ÔÓ¶È:O(1) 
