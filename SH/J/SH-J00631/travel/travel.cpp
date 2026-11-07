#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2,r1,r2;
char al1,al2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	r1=s1[0]+s1[1]; r2=s2[0]+s2[1];
	al1=s1[2]; al2=s2[2];
	if (c1==c2) cout<<1;
	else cout<<0;
	if (c1==c2&&r1==r2) cout<<1;
	else cout<<0;
	if (al1>al2) swap(al1,al2);
	if (c1==c2&&r1==r2&&(al2<='C'||al1=='D')) cout<<1;
	else cout<<0;
	if (c1==c2&&r1==r2&&(al2=='B'||(al1=='B'&&al2=='C')||al1=='D')) cout<<1;
	else cout<<0;
	return 0;
}
