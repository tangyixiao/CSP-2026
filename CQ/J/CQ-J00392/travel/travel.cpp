#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) cout<<1;
	else 
	{
		cout<<"0000";
		return 0;
	}
	int a1=(s1[0]-'0')*10+s1[1];
	int a2=(s2[0]-'0')*10+s2[1];
	if(a1==a2) cout<<1;
	else 
	{
		cout<<"000";
		return 0;
	}
	char side1=s1[2],side2=s2[2];
	if((side1=='D'&&side2!='F')||(side1=='F'&&side2!='D')||(side2=='D'&&side1!='F')||(side2=='F'&&side1!='D'))
	{
		cout<<"00";
		return 0;
	}
	else cout<<1;
	int cha=abs(side1-side2);
	if(cha==1) cout<<1;
	else cout<<0;
}
