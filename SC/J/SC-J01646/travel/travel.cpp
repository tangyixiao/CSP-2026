#include<bits/stdc++.h>
#define ll long long
#define pp pair<int,int>
const int N=2e5+1010; 
using namespace std;
int read()
{
	int x=0,f=1;
	char ch=getchar();
	while(ch>'9'||ch<'0')
	{
		if(ch=='-') f=-1;
		ch=getchar();
	}
	while(ch>='0'&&ch<='9')
	{
		x=x*10+ch-48;
		ch=getchar();
	}
	return x*f;
}
string a,b,c,d;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a!=c) cout<<"0000";
	else if(b[0]!=d[0]||b[1]!=d[1]) cout<<"1000";
	else if(((d[2]=='D'||d[2]=='F')&&(b[2]=='A'||b[2]=='B'||b[2]=='C'))||((b[2]=='D'||b[2]=='F')&&(d[2]=='A'||d[2]=='B'||d[2]=='C'))) cout<<"1100";
	else if((b[2]=='A'&&d[2]=='C')||(b[2]=='C'&&d[2]=='A')) cout<<"1110";
	else cout<<"1111"; 
	return 0;
}