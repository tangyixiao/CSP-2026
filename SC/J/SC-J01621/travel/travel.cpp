#include<bits/stdc++.h>
using namespace std;
int g(char ch)
{
	if(ch=='A')
		return 1;
	if(ch=='B')
		return 1;
	if(ch=='C')
		return 1;
	else
		return 2;
}
int g2(char ch)
{
	if(ch=='F')
		return 5;
	else
		return ch-'A';
}
bool f1(char x,char y)
{
	int xx=g(x);
	int yy=g(y);
	return xx==yy; 
} 
bool f2(char x,char y)
{
	int xx=g2(x);
	int yy=g2(y);
	return abs(xx-yy)==1;
}
signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c)
		cout<<1;
	else
		cout<<0;
	if(a==c&&b[0]==d[0]&&b[1]==d[1])
		cout<<1;
	else
		cout<<0;
	if(a==c&&b[0]==d[0]&&b[1]==d[1]&&f1(b[2],d[2]))
		cout<<1;
	else
		cout<<0;
	if(a==c&&b[0]==d[0]&&b[1]==d[1]&&f1(b[2],d[2])&&f2(b[2],d[2]))
		cout<<1;
	else
		cout<<0; 
	return 0;
} 