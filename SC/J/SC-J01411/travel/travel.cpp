#include<iostream>
using namespace std;
string c1,s1,c2,s2;
string ans1,ans2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2)
	{
		cout<<"0000";
		return 0;
	}
	cout<<1;
	ans1=s1.substr(0,2);
	ans2=s2.substr(0,2);
	if(ans1==ans2) 
	{
		cout<<1;
	}
	else
	{
		cout<<"000";
		return 0;
	}
	ans1=s1.substr(2,1);
	ans2=s2.substr(2,1);
	if((ans1<="C"&&ans2<="C")||(ans1>"C"&&ans2>"C"))
	{
		cout<<1;
	}
	else
	{
		cout<<"00";
		return 0;
	}
	char c3,c4;
	c3=ans1[0],c4=ans2[0];
	if(abs(int(c3-c4))==1&&!((c3=='C'&&c4=='D')||(c4=='C'&&c3=='D')))
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	return 0;
}