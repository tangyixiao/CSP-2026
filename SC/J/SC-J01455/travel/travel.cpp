#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string Rche,Rsit,Xche,Xsit;
	cin>>Rche>>Rsit>>Xche>>Xsit;
	char a1=Rsit[2];
	char a2=Xsit[2]; 
	string s1="";
	string s2="";
	char c=Rsit[0];
	s1+=c;
	c=Rsit[1];
	s1+=c;
	
	c=Xsit[0];
	s2+=c;
	c=Xsit[1];
	s2+=c;
	if(a1>a2)
	{
		swap(a1,a2);
	}
	string answer="";
	if(Rche!=Xche)
	{
		cout<<"0000";
		return 0;
	}
	else
	{
		answer+='1';
		if(s1==s2)
		{
			answer+='1';
		}
		else
		{
			cout<<"1000";
			return 0;
		}
		if(a1+1==a2&&a1+1!='D')
		{
			answer+='1';
		}
		else if(a1=='D'&&a2=='F')
		{
			answer+='1';
		}
	}
	if(answer.size()<4)
	{
		for(int i=1;i<=4-answer.size()+1;i++)
		{
			answer+='0';
		}
	}
	for(int i=0;i<4;i++)
	{
		cout<<answer[i];
	}
	return 0;
}