#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3,s4;
string m1,m2;
char w1,w2;
int l1,l2;
bool f1,f2,f3,f4;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s3>>s2>>s4;
	m1 = s3[0]+s3[1];
	w1 = s3[2];
	m2 = s4[0]+s4[1];
	w2 = s4[2];
	if(w1<='C')
	{
		l1 = 1;
	}
	else if(w1>'C'&&w1<='F')
	{
		l1 = 0;
	}
	if(w2<='C')
	{
		l2 = 1;
	}
	else if(w2>'C'&&w2<='F')
	{
		l2 = 0;
	}
	if(s1==s2)
	{
		cout<<1;
		f1 = 1;
	}
	else
		cout<<0;
	if(m1==m2&&f1)
	{
		cout<<1;
		f2 = 1;
	}
	else
		cout<<0;
	if(l1==l2&&f2)
	{
		cout<<1;
		f3 = 1;
	}
	else
		cout<<0;
	if(l1==l2&&abs(int(w1-w2))==1&&f3)
	{
		cout<<1;
	}
	else
		cout<<0; 
	return 0;
}
