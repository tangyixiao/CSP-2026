#include<iostream>
#include<string>
using namespace std;
int c1,c2;
string s1,s2;
bool ans[5];
int pai(string s)
{
	return (s[0]-'0')*10+s[1]-'0';
}
int zuo(string s)
{
	return s[2];
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2)
	{
		cout<<"0000";
		return 0;
	}
	ans[1]=1;
	if(pai(s1)!=pai(s2))
	{
		cout<<1000;
		return 0;
	}
	ans[2]=1;
	if(('A'<=zuo(s1)&&zuo(s1)<='C'&&'D'<=zuo(s2)&&zuo(s2)<='F')||('D'<=zuo(s1)&&zuo(s1)<='F'&&'A'<=zuo(s1)&&zuo(s2)<='C'))
	{
		cout<<1100;
		return 0;
	}
	ans[3]=1;
	if('A'==zuo(s1)&&'C'==zuo(s2)||'A'==zuo(s2)&&'C'==zuo(s1))
	{
		cout<<1110;
		return 0;
	}
	ans[4]=1;
	cout<<1111;
	return 0;
}
