#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int maxn=2e6;
string c1,s1,c2,s2;
string a1,a2;
char b1,b2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	a1=s1[0],a1+=s1[1],b1=s1[2];
	a2=s2[0],a2+=s2[1],b2=s2[2];
	if(c1==c2) cout<<1;
	else cout<<0;
	if(c1==c2&&a1==a2) cout<<1;
	else cout<<0;
	if(c1==c2&&a1==a2&&((b1<='C'&&b2<='C')||(b1>'C'&&b2>'C'))) cout<<1;
	else cout<<0;
	if(c1==c2&&a1==a2&&abs(int(b1-b2))==1&&((b1<='C'&&b2<='C')||(b1>'C'&&b2>'C'))) cout<<1;
	else cout<<0;
	return 0;
}

