#include<bits/stdc++.h>
using namespace std;
#define ll long long
string c1,c2,s1,s2,str1,str2;
bool check1(string a,string b)
{
	if(a[2]=='A'&&b[2]=='B') return 1;
	if(a[2]=='B'&&b[2]=='A') return 1;
	if(a[2]=='A'&&b[2]=='C') return 1;
	if(a[2]=='C'&&b[2]=='A') return 1;
	if(a[2]=='B'&&b[2]=='C') return 1;
	if(a[2]=='C'&&b[2]=='B') return 1;
	if(a[2]=='D'&&b[2]=='F') return 1;
	if(a[2]=='F'&&b[2]=='D') return 1;
	return 0;
}
bool check2(string a,string b)
{
	if(a[2]=='A'&&b[2]=='B') return 1;
	if(a[2]=='B'&&b[2]=='A') return 1;
	if(a[2]=='B'&&b[2]=='C') return 1;
	if(a[2]=='C'&&b[2]=='B') return 1;
	if(a[2]=='D'&&b[2]=='F') return 1;
	if(a[2]=='F'&&b[2]=='D') return 1;
	return 0;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(nullptr);
	cin>>c1>>s1>>c2>>s2;
	str1=s1[0]+s1[1];
	str2=s2[0]+s2[1];
	if(c1!=c2) cout<<0;
	else cout<<1;
	if(c1==c2&&str1==str2) cout<<1;
	else cout<<0;
	if(c1==c2&&str1==str2&&check1(s1,s2)) cout<<1;
	else cout<<0;
	if(c1==c2&&str1==str2&&check1(s1,s2)&&check2(s1,s2)) cout<<1;
	else cout<<0;
	return 0;
}
