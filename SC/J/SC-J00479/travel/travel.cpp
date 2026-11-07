#include<bits/stdc++.h>
using namespace std;
int a,b;
string x,y;
string answer;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>x>>b>>y;
	int n=0,m=0;
	if(a==1||b==1||a==16||b==16)
	{
		cout<<"0000";
		return 0;
	}
	for(int i=0;i<=1;i++)
	{
		n*=10;
		m*=10;
		n+=(x[i]-48);
		m+=(y[i]-48);
	}
	if(a==b)
	{
		answer+='1';
	}
	else
	{
		answer+="0000";
		cout<<answer;
		return 0;
	}
	if(n==m)
	{
		answer+='1';
	}
	else
	{
		answer+="000";
		cout<<answer;
		return 0;
	}
	if((x[2]-'A'<=2&&y[2]-'A'<=2)||(x[2]-'A'>2&&y[2]-'A'>2))
	{
		answer+='1';
	}
	else
	{
		answer+="00";
		cout<<answer;
		return 0;
	}
	if(x[2]-'A'>2)
	{
		answer+='1';
		cout<<answer;
	}
	else if(((x[2]=='A'||x[2]=='C')&&y[2]=='B')||(x[2]=='B'&&(y[2]=='A'||y[2]=='C')))
	{
		answer+='1';
		cout<<answer;
	}
	else
	{
		answer+='0';
		cout<<answer;
	}
	return 0;
}