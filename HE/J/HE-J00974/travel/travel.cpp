#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2,a1,a2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) cout<<1;
	else {
		cout<<"0000";
		return 0;
    }
	a1+=s1[0]+s1[1];a2+=s2[0]+s2[1];
	if(a1==a2)cout<<1;
	else {
		cout<<"000";
		return 0;
	}
	char b1,b2;
	b1=s1[2];b2=s2[2];
	if((b1<='C'&&b2<='C')||(b1>'C'&&b2>'C')) cout<<1;
	else {
		cout<<"00";
		return 0;
	}
	if(abs(b1-b1)==1)cout<<1;
	else cout<<0;
	return 0;
}
