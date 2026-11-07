#include<bits/stdc++.h>
using namespace std;
int s[4]={0,0,0,0};
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	string c,d;
	cin>>a;
	cin>>c;
	cin>>b;
	cin>>d;
	if(a==b)
	{
		s[0]=1;
	
	}
	 if(a==b&&c[1]==d[1]) s[1]=1;
	if(a==b&&c[1]==d[1]&&c[2]=='A'||c[2]=='B'||c[2]=='C'&&d[2]=='A'||d[2]=='C'||d[2]=='B'||c[2]=='D'||c[2]=='F'&&d[2]=='F'||d[2]=='D' ) s[2]=1;
	if(a==b&&c[1]==d[1]&&c[2]=='A'||c[2]=='B'||c[2]=='C'&&d[2]=='A'||d[2]=='C'||d[2]=='B'||c[2]=='D'||c[2]=='F'&&d[2]=='F'||d[2]=='D'&&c[2]=='A'&&d[2]=='B'||c[2]=='B'&&d[2]=='A'||d[2]=='C'||c[2]=='C'&&d[2]=='B'||c[2]=='D'&&d[2]=='F'||c[2]=='F'&&d[2]=='D')
	{
		s[3]=1;	
	 } 
	for(int i=0;i<4;i++)
	{
		if(s[i]==1) cout<<s[i];
		if(s[i]==0)
		{
			s[i+1]=0;
			cout<<s[i];
		}
	}
	return 0;
 } 