#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string m,s;
	int n,a;
	cin>>n>>m>>a>>s;
	if(n==a)cout<<'1';
	else {cout<<'0'<<'0'<<'0'<<'0';return 0;}
	int i=m[0],y=m[1];
	int q=10*i+y;
	int e=s[0],r=s[1];
	int w=10*e+r;
	if(q==w)cout<<'1';
	else {cout<<'0'<<'0'<<'0';return 0;};
	if(m[2]=='A'&&s[2]=='B'||m[2]=='A'&&s[2]=='C'||m[2]=='B'&&s[2]=='C'||m[2]=='D'&&s[2]=='F'||s[2]=='A'&&m[2]=='B'||s[2]=='A'&&m[2]=='C'||s[2]=='B'&&m[2]=='C'||s[2]=='D'&&m[2]=='F')cout<<'1';
	else {cout<<'0'<<'0';return 0;}
	if(m[2]=='A'&&s[2]=='B'||m[2]=='B'&&s[2]=='C'||m[2]=='D'&&s[2]=='F'||s[2]=='A'&&m[2]=='B'||s[2]=='B'&&m[2]=='C'||s[2]=='D'&&m[2]=='F')cout<<'1';
	else cout<<'0';
	return 0;
 } 
 
