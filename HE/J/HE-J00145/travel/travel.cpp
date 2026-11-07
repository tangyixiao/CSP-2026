#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+5;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	bool che=1,pai=1,ce=1,ling=1;
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
		che=0;
	}
	
	if(che==1&&s1[0]==s2[0]&&s1[1]==s2[1])
	{
		cout<<1;
	}
	else
	{
		cout<<0;
		pai=0;
	}
	
	if(che==1&&pai==1&&( (s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C') || (s1[2]>='D'&&s1[2]<='F'&&s2[2]>='D'&&s2[2]<='F')) )
	{
		cout<<1;
	}
	else
	{
		cout<<0;
		ce=0;
	}
	
	if((s1[2]=='A'&&s2[2]=='C')||(s2[2]=='A'&&s1[2]=='C')||s1[2]==s2[2]||che==0||pai==0||ce==0)
	{
		cout<<0;
	}
	else
	{
		cout<<1;
	}
	return 0;
}
