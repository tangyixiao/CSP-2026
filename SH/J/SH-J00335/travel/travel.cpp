#include<bits/stdc++.h>
using namespace std;
bool isf(int a,int b)
{
	if(a<=2&&b<=2) return 1;
	else if(a>=3&&b>=3) return 1;
	else return 0;
	return 0; 
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	int s1=0,s2=0,t1=0,t2=0,x1,x2;
	for(int i=0;i<a.length();i++)
	{
		s1=s1*10+a[i]-'0';
	}
	for(int i=0;i<c.length();i++)
	{
		s2=s2*10+c[i]-'0';
	}
	t1=(b[0]-'0')*10+b[1]-'0',t2=(d[0]-'0')*10+d[1]-'0';
	x1=b[2]-'A',x2=d[2]-'A';
	if(s1==s2) cout<<1;
	else cout<<0;
	if(s1==s2&&t1==t2) cout<<1;
	else cout<<0;
	if(s1==s2&&t1==t2&&isf(x1,x2)) cout<<1;
	else cout<<0;
	if(s1==s2&&t1==t2&&isf(x1,x2)&&abs(x1-x2)==1) cout<<1;
	else cout<<0;
	return 0;
}
