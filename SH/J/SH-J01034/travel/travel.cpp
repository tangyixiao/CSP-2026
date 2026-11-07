#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string cc1,ss1,cc2,ss2;
	cin>>cc1>>ss1>>cc2>>ss2;
	string ans="";
	if(cc1==cc2)
	{
		ans='1'+ans;
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	bool flag22=true;
	for(int i=0;i<2;i++)
	{
		if(ss1[i]!=ss2[i]){
			flag22=false;
			break;
		}
	}
	if(flag22)
	{
		ans='1'+ans;
	}
	else
	{
		cout<<"1000";
		return 0;
	}
	bool flag=false;
	if((ss1[2]=='D'||ss1[2]=='F')&&(ss2[2]=='D'||ss2[2]=='F'))
	{
		flag=true;
	}
	if((ss1[2]>='A'&&ss1[2]<='C')&&(ss2[2]>='A'&&ss2[2]<='C'))
	{
		flag=true;
	}
	if(flag)
	{
		ans='1'+ans;
	}
	else
	{
		cout<<"1100";
		return 0;
	}
	if(flag&&abs(ss1[2]-ss2[2])==1)
	{
		ans='1'+ans;
	}
	else
	{
		cout<<"1110";
		return 0;
	}
	cout<<ans;
	return 0;
}
