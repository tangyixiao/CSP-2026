#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3,s4;
bool pd()
{
	for(int i=0;i<2;i++) if(s2[i]!=s4[i]) return false;
	return true;
}
bool pd1()
{
	if((s2[2]<='C' && s4[2]<='C') || (s2[2]>='D' && s4[2]>='D')) return true;
	else return false;
}
bool pd2()
{
	if(abs(s2[2]-s4[2])==1)
	{
		if((s2[2]=='C' && s4[2]=='D') || (s2[2]=='D' && s4[2]=='C')) return false; 
		else return true;
	}
	else return false;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s2>>s3>>s4;
	if(s1==s3)
	{
		cout<<1;
		if(pd())
		{
			cout<<1;
			if(pd1()) cout<<1;
			else cout<<0;
			if(pd2()) cout<<1;
			else cout<<0;
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}