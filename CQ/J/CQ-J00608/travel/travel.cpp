#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string c1,s1,c2,s2;//A:65 B:66 C:67 D:68 F:70 
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) cout<<"1";
	else
	{
		cout<<"0000";
		return 0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]) cout<<"1";
	else
	{
		cout<<"000";
		return 0;
	}
	int hao1=max(int(s1[2])-64,int(s2[2])-64);
	int hao2=min(int(s1[2])-64,int(s2[2])-64);
	if(hao1==4)
	{
		cout<<"00";
		return 0;	
	}
	if(hao1==6)
	{
		if(hao2==4)
		{
			cout<<"11";
			return 0;
		}
		else
		{
			cout<<"00";
			return 0;
		}
	}
	cout<<"1";
	if((hao1-hao2)==1)
	{
		cout<<"1";
		return 0;
	}
	else
	{
		cout<<"0";
		return 0;
	}
	return 0;
}
