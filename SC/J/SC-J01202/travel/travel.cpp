#include<bits/stdc++.h>
using namespace std;
string l1,l2,s1,s2;
string panduan(string s1,string s2,string s3,string s4,char c,char c1)
{
	string r="";
	if(c>c1)
	{
		swap(c,c1);
	}
	r+=(s1==s2?'1':'0');
	if(r=="0")
	{
		return "0000";
	}
	r+=(s3==s4?'1':'0');
	if(r[1]=='0')
	{
		return "1000";
	}
	if(s3==s4&&((c<'D'&&c1<'D')||(c>='D'&&c1>='D')))
	{
		r+='1'; 
	}
	else
	{
		r+='0';
	}
	if(r[2]=='0')
	{
		r+='0';
	}
	else
	{
		if(!((c=='A'&&c1=='C')))
		{
			r+='1';
		}
		else
		{
			r+='0';
		}
		
	}
	return r;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>l1>>s1>>l2>>s2;
	string s3=s1.substr(0,2),s4=s2.substr(0,2);
	char c=s1[s1.size()-1],c1=s2[s2.size()-1];
	cout<<panduan(l1,l2,s3,s4,c,c1);
	return 0;
}