#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int l(char a,char b)
{
	if(c1!=c2)
	return 0;
	if(s1[0]!=s2[0]||s1[1]!=s2[1])
	return 0;
	if(a>='D'&&a<='F'&&b>='D'&&b<='F')
	return 1;
	if(a>='A'&&a<='C'&&b>='A'&&b<='C')
	return 1;
	return 0;
}
int r(char a,char b)
{
	if(l(a,b)){
		if(abs(a-b)==1)
		return 1;
		else
		return 0;
	}else
	return 0;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	cout<<(c1==c2);
	cout<<(s1[0]==s2[0]&&s1[1]==s2[1]&&c1==c2);
	cout<<l(s1[2],s2[2]);
	cout<<r(s1[2],s2[2]);
	return 0;
}
