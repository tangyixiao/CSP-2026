#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2,ss1,ss2,a1,a2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	ss1=(s1[0]-'0')*10+(s1[1]-'0');
	ss2=(s2[0]-'0')*10+(s2[1]-'0');
	a1=s1[2];
	a2=s2[2];
	//cout<<s1<<endl<<s2<<endl;
	if(c1==c2)
		cout<<1;
	else
	{
		cout<<"0000";
		return 0;
	}
	if(ss1==ss2)
		cout<<1;
	else
	{
		cout<<"000";
		return 0;
	}
	if(a1=='A'&&a2=='B')
		cout<<"11";
	if(a1=='A'&&a2=='C')
		cout<<"10";
	if(a1=='A'&&a2=='D')
		cout<<"00";
	if(a1=='A'&&a2=='E')
		cout<<"00";
	if(a1=='B'&&a2=='A')
		cout<<"11";
	if(a1=='B'&&a2=='C')
		cout<<"11";
	if(a1=='B'&&a2=='D')
		cout<<"00";
	if(a1=='B'&&a2=='E')
		cout<<"00";
	if(a1=='C'&&a2=='A')
		cout<<"10";
	if(a1=='C'&&a2=='B')
		cout<<"11";
	if(a1=='C'&&a2=='D')
		cout<<"00";
	if(a1=='C'&&a2=='E')
		cout<<"00";
	if(a1=='D'&&a2=='A')
		cout<<"00";
	if(a1=='D'&&a2=='B')
		cout<<"00";
	if(a1=='D'&&a2=='C')
		cout<<"00";
	if(a1=='D'&&a2=='E')
		cout<<"11";
	if(a1=='E'&&a2=='B')
		cout<<"00";
	if(a1=='E'&&a2=='C')
		cout<<"00";
	if(a1=='E'&&a2=='D')
		cout<<"11";
	if(a1=='E'&&a2=='A')
		cout<<"00";
	return 0;
}
