#include<bits/stdc++.h>
#define int long long

using namespace std;
string c1,s1,c2,s2;
int r1,r2,a1,a2;
char b1,b2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	r1=(c1[0]-'0')*10+c1[1]-'0';
	r2=(c2[0]-'0')*10+c2[1]-'0';
	a1=(s1[0]-'0')*10+s1[1]-'0';
	a2=(s2[0]-'0')*10+s2[1]-'0';
	b1=s1[2];b2=s2[2];
	cout<<(r1==r2)<<(r1==r2&&a1==a2)<<(r1==r2&&a1==a2&&((b1<='C'&&b2<='C')||(b1>='D'&&b2>='D')));
	cout<<(r1==r2&&a1==a2&&((b1<='C'&&b2<='C')||(b1>='D'&&b2>='D'))&&llabs(b1-b2)==1);
	return 0;
}
/*
fc travel2.out travel2.ans
*/
