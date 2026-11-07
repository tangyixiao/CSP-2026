#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char a,b,c,d,e,f,g,h,i,j;
	cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j;
	if(a==f&&b==g)
		cout<<1;
	else
		cout<<0;
	if(a==f&&b==g&&c==h&&d==i)
		cout<<1;
	else
		cout<<0;
	if(a==f&&b==g&&c==h&&d==i&&(e=='A'||e=='B'||e=='C')&&(j=='A'||j=='B'||j=='C'))
		cout<<1;
	else if(a==f&&b==g&&c==h&&d==i&&(e=='D'||e=='F')&&(j=='D'||j=='F'))
		cout<<1;
	else
		cout<<0;
	if(a==f&&b==g&&c==h&&d==i&&((e=='A'||e=='B'||e=='C')&&(j=='A'||j=='B'||j=='C')||(e=='D'||e=='F')&&(j=='D'||j=='F'))&&e-j==1||j-e==1)
		cout<<1;
	else
		cout<<0;
	return 0;
}
