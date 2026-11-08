#include <bits/stdc++.h>
using namespace std;
bool check(char a,char b)
{
	if(a>='D'&&b<='C'||a<='C'&&b>='D') return false;
	return true;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,s1,s2;
	cin>>c1>>s1;
	cin>>c2>>s2;
	int q1=0,q2=0,q3=0,q4=0;
	if(c1!=c2)
	{
		cout<<q1<<q2<<q3<<q4;
		return 0;
	}
	q1=1;
	string s3=""+s1[0]+s1[1],s4=""+s2[0]+s2[1];
	if(s3!=s4)
	{
		cout<<q1<<q2<<q3<<q4;
		return 0;
	}
	q2=1;
	char c3=s1[2],c4=s2[2];
	if(!check(c3,c4))
	{
		cout<<q1<<q2<<q3<<q4;
		return 0;
	}
	q3=1;
	if(c3=='A'&&c4=='C'||c3=='C'&&c4=='A')
	{
		cout<<q1<<q2<<q3<<q4;
		return 0;
	}
	q4=1;
	cout<<q1<<q2<<q3<<q4;
	return 0;
}
