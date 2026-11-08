#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int b[5]={0,0,0,0,0};
	int c1;
	char s1[3];
	int c2;
	char s2[3];
	cin>>c1;
	for(int i=0;i<3;i++)
	{
		cin>>s1[i];
	}
	cin>>c2;
	for(int i=0;i<3;i++)
	{
		cin>>s2[i];
	}
	if(c1==c2)
	{
		cout<<"1";
		b[1]=1;
	}
	else cout<<"0";
	if(b[1]==1&&int(s1[0])==int(s2[0])&&int(s1[1])==int(s2[1]))
	{
		cout<<"1";
		b[2]=1;
	}
	else cout<<"0";
	if(b[2]==1&&(s1[2]+s2[2])!=('C'+'D'))
	{
		if((s1[1]-s2[2])<=2||(s1[1]-s2[2])>=-2)
		{cout<<"1";
		b[3]=1;}
		else cout<<"0";
		
	}
	else cout<<0;
	if(b[3]==1)
	{
		if((s1[2]+1)==s2[2]||(s1[2]-1)==s2[2])
	{
		cout<<"1";
	}
	else cout<<"0";
	}
	else cout<<"0";
	
	
	
	return 0;
}
