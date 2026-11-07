#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string sun,shi,yu,duan;
	cin>>sun>>shi>>yu>>duan;
	int shu,hong,bai,jun;
	string nu=shi,mu=duan,su,hu;
	char zh,ch;
	bool flag=1;
	if(sun==yu)
	{
		shu=1;
		flag=1;
	}
	else if(sun!=yu||sun.size()=='01'||sun.size()=='16'||yu.size()=='01'||yu.size()=='16') 
	{
		shu=0;
		flag=0;
	}
	for(int i=0;i<nu.size();i++)
	{
		if(nu[i]>='0'&&nu[i]<='9'&&mu[i]!='0')
		{
			su+=nu[i];
		}
	}
	for(int i=0;i<mu.size();i++)
	{
		if(mu[i]>='0'&&mu[i]<='9'&&mu[i]!='0')
		{
			hu+=mu[i];
		}
	}
	if(su==hu&&sun==yu)
	{
		hong=1;
	}
	else
	{
		hong=0;
	}
	nu=shi,mu=duan;
	for(int i=0;i<nu.size();i++)
	{
		if(nu[i]>='A'&&nu[i]<='Z')
		{
			zh+=nu[i];
		}
	}
	for(int i=0;i<mu.size();i++)
	{
		if(mu[i]>='A'&&mu[i]<='Z')
		{
			ch+=mu[i];
		}
	}
	if(((zh=='A'&&ch=='B')||(zh=='B'&&ch=='C')||(zh=='B'&&ch=='A')||(zh=='C'&&ch=='B')||(zh=='D'&&ch=='E')||(zh=='E'&&ch=='D')||(zh=='A'&&ch=='C')||(zh=='C'&&ch=='A'))&&sun==yu&&su==hu)
	{
		bai=1;
	}
	else
	{
		bai=0;
	}
	if(((zh=='A'&&ch=='B')||(zh=='B'&&ch=='C')||(zh=='B'&&ch=='A')||(zh=='C'&&ch=='B')||(zh=='D'&&ch=='E')||(zh=='E'&&ch=='D'))&&su==hu&&sun==yu)
	{
		jun=1;
	}
	else
	{
		jun=0;
	}
	if(flag!=0)cout<<shu<<hong<<bai<<jun;
	else
	{
		cout<<"0000";
		return 0;
	}
	return 0;
}
