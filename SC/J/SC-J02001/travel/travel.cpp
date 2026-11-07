#include <bits/stdc++.h>
using namespace std;
string s1,t1,s2,t2;
int d[6]={0,0,0,1,0,1};
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>t1>>s2>>t2;
	if (s1!=s2)
	{
		cout<<"0000";
		return 0;
	}
	if (t1.substr(0,2)!=t2.substr(0,2))
	{
		cout<<"1000";
		return 0;
	}
	if (d[t1[2]-'A']!=d[t2[2]-'A'])
	{
		cout<<"1100";
		return 0;
	}
	if (abs(t1[2]-t2[2])==1||t1[2]=='D'&&t2[2]=='F'||t1[2]=='F'&&t2[2]=='D')
		cout<<"1111";
	else
		cout<<"1110";
	return 0;
}