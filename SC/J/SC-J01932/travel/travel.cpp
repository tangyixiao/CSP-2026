#include<bits/stdc++.h>
using namespace std;
char a,b;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c,s,c2,s2;
	cin>>c>>s>>c2>>s2;
	bool flag=1,flag2=1;
	for(int i=0;i<=1;i++)
	{
		if(c[i]!=c2[i])
		{
			flag=0;
		}
		if(s[i]!=s2[i])
		{
			flag2=0;
		}
	}
	if(flag2>flag)
	{
		flag2=0;
	}
	cout<<flag;
	cout<<flag2; 
	if(flag==1&&flag2==1)
	{
		if(s[2]=='A'&&s2[2]=='B'||s[2]=='B'&&s2[2]=='A')
		{
			cout<<11;
			return 0;
		}
		else if(s[2]=='A'&&s2[2]=='C'||s[2]=='C'&&s2[2]=='A')
		{
			cout<<10;
			return 0;
		}
		else if(s[2]=='B'&&s2[2]=='C'||s[2]=='C'&&s2[2]=='B')
		{
			cout<<11;
			return 0;
		}
		else if(s[2]=='D'&&s2[2]=='F')
		{
			cout<<11;
			return 0;
		}
		else if(s[2]=='F'&&s2[2]=='D')
		{
			cout<<11;
			return 0;
		}
	}
cout<<"00";
	return 0; 
}

