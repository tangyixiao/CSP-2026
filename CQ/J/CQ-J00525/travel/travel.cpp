#include <bits/stdc++.h>
#define ll long long
#define mod 998244353
using namespace std;
int main ()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	int c1=(a[0]-'0')*10+a[1]-'0';
	int c2=(c[0]-'0')*10+c[1]-'0';
	int h1=(b[0]-'0')*10+b[1]-'0';
	int h2=(d[0]-'0')*10+d[1]-'0';
	int s1=b[2]-'A';
	int s2=d[2]-'A';
	if (s1==5)s1=4;
	if (s2==5)s2=4;
	if (c1==c2)
	{
		cout<<1;
		if (h1==h2)
		{
			cout<<1;
			if (s1<=2&&s2<=2||s1>2&&s2>2)
			{
				cout<<1;
				if (abs(s1-s2)==1)cout<<1;
				else cout<<0;
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}
/*
Wish me RP++
*/
