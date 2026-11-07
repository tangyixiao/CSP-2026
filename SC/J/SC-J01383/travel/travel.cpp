#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	
	for(int i=0;i<2;i++)
	{
		if(c1[i]!=c2[i])
		{
			cout<<"0000";
			return 0;
		}
	}
	cout<<'1';
	
	string st1=s1.substr(0,2);
	string st2=s2.substr(0,2);
	for(int i=0;i<2;i++)
	{
		if(st1[i]!=st2[i])
		{
			cout<<"000";
			return 0;
		}
	}
	cout<<'1';
	
	string sr1=s1.substr(2,1);
	string sr2=s2.substr(2,1);
	if(((sr1[0]=='A'||sr1[0]=='B'||sr1[0]=='C')&&(sr2[0]=='D'||sr2[0]=='F'))||((sr2[0]=='A'||sr2[0]=='B'||sr2[0]=='C')&&(sr1[0]=='D'||sr1[0]=='F')))
	{
		cout<<"00";
		return 0;
	}
	cout<<'1';
	
	int n=sr1[0]-'A';
	int m=sr2[0]-'A';
	if(n>5)n-=1;
	if(m>5)n-=1;
	if(abs(n-m)==1)cout<<'1';
	else cout<<'0';
	return 0;
}