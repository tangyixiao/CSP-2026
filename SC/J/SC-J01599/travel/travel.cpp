#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool a,b,c,d;
	a=(c1==c2);
	b=a&&(s1[0]==s2[0])&&(s1[1]==s2[1]);
	c=b&&((s1[2]<='C'&&s2[2]<='C')||(s1[2]>'C'&&s2[2]>'C'));
	d=c&&(s1[2]-s2[2]==1||s2[2]-s1[2]==1);
	cout<<a<<b<<c<<d;
	return 0;
}