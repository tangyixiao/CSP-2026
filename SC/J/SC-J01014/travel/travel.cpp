#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int b1,b2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	bool che=1;
	if(c1==c2)
		cout<<1;
	else cout<<0,che=0;
	int ls1=s1.length();
	bool f=1;
	for(int i=0;i<ls1-1;i++)
	{
		if(s1[i]!=s2[i]) f=0; 
	}
	bool pai=1;
	if(che==1&&f==1) cout<<1;
	else cout<<0,pai=0;
	int a1=3;
	int a2=3;
	if(s1[ls1-1]=='A'||s1[ls1-1]=='B'||s1[ls1-1]=='C') a1=1;
	else a1=0;
	if(s2[ls1-1]=='A'||s2[ls1-1]=='B'||s2[ls1-1]=='C') a2=1;
	else a2=0;
	bool ok=1;
	if(pai==1&&a1==a2) cout<<1;
	else cout<<0,ok=0;
	if(s1[ls1-1]=='A') b1=1;
	if(s1[ls1-1]=='B') b1=2;
	if(s1[ls1-1]=='C') b1=3;
	if(s1[ls1-1]=='D') b1=5;
	if(s1[ls1-1]=='F') b1=6;
	if(s2[ls1-1]=='A') b2=1;
	if(s2[ls1-1]=='B') b2=2;
	if(s2[ls1-1]=='C') b2=3;
	if(s2[ls1-1]=='D') b2=5;
	if(s2[ls1-1]=='F') b2=6;
	if(ok==1&&abs(b1-b2)==1) cout<<1;
	else cout<<0;
	return 0;
}