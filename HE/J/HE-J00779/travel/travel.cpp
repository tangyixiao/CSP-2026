#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll seatr,seatx;
string r,x;
ll a=0,b=0;
char c1,c2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%lld",&seatr);
	cin>>r;
	scanf("%lld",&seatx);
	cin>>x;
	if(seatr==seatx) cout<<1;
	else
	{
		cout<<0<<0<<0<<0;
		return 0;
	}
	for(int i=0;i<=1;i++)
	{
		a=a*10+r[i]-'0';
		b=b*10+x[i]-'0';
	}
	//cout<<a<<endl<<b;
	c1=r[2];
	c2=x[2];
	//cout<<c1<<endl<<c2;
	if(a==b)
	{
		cout<<1;
	}
	else
	{
		cout<<0<<0<<0;
		return 0;
	}
	if((c1=='D'&&c2=='F')||(c1=='F'&&c2=='D')||(c1=='A'&&c2=='B')||(c1=='A'&&c2=='C')||(c1=='B'&&c2=='C')||(c1=='B'&&c2=='A')||(c1=='C'&&c2=='A')||(c1=='C'&&c2=='B'))
	{
		cout<<1;
	}
	else
	{
		cout<<0<<0;
	//	cout<<"jjjjj";
		return 0;
	}
	if((c1=='A'&&c2=='C')||(c1=='C'&&c2=='A'))
	{
		cout<<0;
		return 0;
	}
	cout<<1;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
