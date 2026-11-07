#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	long long a1=(c1[0]-'0')*10+(c1[1]-'0'),a2=(c2[0]-'0')*10+(c2[1]-'0');
	long long b1=(s1[0]-'0')*10+(s1[1]-'0'),b2=(s2[0]-'0')*10+(s2[1]-'0');
	cout<<(a1==a2);
	cout<<(a1==a2&&b1==b2);
	cout<<(a1==a2&&b1==b2&&(s1[2]!='D'||s2[2]!='C')&&(s2[2]!='D'||s1[2]!='C'));
	cout<<(a1==a2&&b1==b2&&(s1[2]!='D'||s2[2]!='C')&&(s2[2]!='D'||s1[2]!='C')&&abs(s1[2]-s2[2])==1);
	return 0;
}