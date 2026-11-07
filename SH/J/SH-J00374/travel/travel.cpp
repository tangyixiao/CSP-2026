#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char list[6]={'A','B','C',' ','D','F'};
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	int a2=0,c2=0;
	for(int i=0;i<2;i++)
	{
		a2*=10;
		c2*=10;
		a2+=b[i]-'0';
		c2+=d[i]-'0';
	}
	cout<<(a==c)<<(a2==c2)<<((b[2]<='C'&&d[2]<='C')||(b[2]>='D'&&d[2]>='D'));
	bool x=0;
	for(int i=0;i<5;i++)
	{
		if((b[2]==list[i]&&d[2]==list[i+1])||(b[2]==list[i+1]&&d[2]==list[i])) x=(a2==c2);
	}
	cout<<x;
}
