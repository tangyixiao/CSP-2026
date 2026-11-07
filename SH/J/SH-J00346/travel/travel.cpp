#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool check1()
{
	char ch1=s1[2],ch2=s2[2];
	if(ch1<='C'&&ch2<='C') return true;
	if((ch1=='D'&&ch2=='F')||(ch1=='F'&&ch2=='D')) return true;
	return false;
}
bool check2()
{
	char ch1=s1[2],ch2=s2[2];
	if(ch1>ch2)
	{
		char t=ch1;
		ch1=ch2,ch2=t;
	}
	return (int)ch2-(int)ch1==1;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2) cout<<"0000";
	else if(s1.substr(0,2)!=s2.substr(0,2)) cout<<"1000";
	else if(!check1()) cout<<"1100";
	else if(!check2()) cout<<"1110";
	else cout<<"1111";
	return 0;
}
