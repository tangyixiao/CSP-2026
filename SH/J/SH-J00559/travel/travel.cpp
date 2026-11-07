#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool a,b,c,d;//a:chexiang b:tongyipai c:tongyice d:xianglin 
bool f(string x,string y)
{
	if(s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C')
		return 1;
	if(s1[2]>='D'&&s1[2]<='F'&&s2[2]>='D'&&s2[2]<='F')
		return 1;
	return 0;
}
int main()
{
	ios::sync_with_stdio(false);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2&&c1!="01"&&c1!="16")
		a=1;
	if(a&&s1[0]==s2[0]&&s1[1]==s2[1])
		b=1;
	if(b&&f(s1,s2))
		c=1;
	if(c&&(abs(s1[2]-s2[2])==1))
		d=1;
	cout<<a<<b<<c<<d;
	return 0;
}
