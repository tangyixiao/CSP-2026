#include<bits/stdc++.h>
using namespace std;
string s1,s2;
long long c1,c2;
bool check1(string s1,string s2)
{
	int a=(s1[0]-'0')*10+(s1[1]-'0'),b=(s2[0]-'0')*10+(s2[1]-'0');
	return a==b;
}
bool check2(string s1,string s2)
{
	if(s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C') return 1;
	if(s1[2]>='D'&&s1[2]<='F'&&s2[2]>='D'&&s2[2]<='F') return 1;
	return 0;
}
bool check3(string s1,string s2)
{
	if((s1[2]=='A'&&s2[2]=='B')||(s1[2]=='B'&&s2[2]=='A')) return 1;
	if((s1[2]=='B'&&s2[2]=='C')||(s1[2]=='C'&&s2[2]=='B')) return 1;
	if((s1[2]=='D'&&s2[2]=='F')||(s1[2]=='F'&&s2[2]=='D')) return 1;
	return 0;
}
int main() 
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) cout<<1;
	else cout<<0;
	if(c1==c2&&check1(s1,s2)) cout<<1;
	else cout<<0;
	if(c1==c2&&check1(s1,s2)&&check2(s1,s2)) cout<<1;
	else cout<<0;
	if(c1==c2&&check1(s1,s2)&&check2(s1,s2)&&check3(s1,s2)) cout<<1;
	else cout<<0;
    return 0;
}
