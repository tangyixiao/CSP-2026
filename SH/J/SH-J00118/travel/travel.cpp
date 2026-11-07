#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2;
	char s1[3],s2[3];
	cin>>c1;
	for(int i=1;i<=3;i++)
		cin>>s1[i];
	cin>>c2;
	for(int i=1;i<=3;i++)
		cin>>s2[i];
	//同车厢 
	if(c1==c2)
		cout<<"1";
	else
	{
		cout<<"0000";
		return 0;
	}
	//同排
	if(s1[1]==s2[1]&&s1[2]==s2[2])
		cout<<"1";
	else
	{
		cout<<"000";
		return 0;
	}
	//同侧
	if(((s1[3]<='C')&&(s1[3]>='A')&&(s2[3]<='C'&&(s2[3]>='A')))&&(s2[3]!=s1[3]))
		cout<<"1";
	else if((s1[3]<='F')&&(s1[3]>='D')&&(s2[3]<='F'&&(s2[3]>='D'))&&(s2[3]!=s1[3]))
		cout<<"1";
	else
		cout<<"0";
	//相邻
	if((s1[3]==s2[3]+1)||(s1[3]==s2[3]-1))
	{
		if((s1[3]=='C'&&s2[3]=='D')||(s1[3]=='D'&&s2[3]=='C'))
		{
			cout<<"0"<<endl;
			return 0;
		}
		cout<<"1"<<endl;
		return 0;
	}
	cout<<"0"<<endl;
	return 0;
} 
