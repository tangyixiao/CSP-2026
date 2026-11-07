#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3,s4;
int g(string s)
{
	int sum=0;
	for(int i=0;i<s.size();i++) sum=sum*10+(s[i]-'0');
	return sum;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s2>>s3>>s4;
	if(g(s1)!=g(s3))
	{
		cout<<"0000"<<endl;
		return 0;
	}
	cout<<"1";
	if(g(s2.substr(0,2))!=g(s4.substr(0,2)))
	{
		cout<<"000"<<endl;
		return 0;
	}
	cout<<"1";
	if(!((s2[2]<='C'&&s4[2]<='C')||(s2[2]>='D'&&s4[2]>='D')))
	{
		cout<<"00"<<endl;
		return 0;
	}
	cout<<"1";
	if(abs(s2[2]-s4[2])!=1)
	{
		cout<<"0"<<endl;
		return 0;
	}
	cout<<"1";
	return 0;
}