#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll=long long;
string s1,s2,s3,s4;
int a1,a2,a3,b1,b2,b3;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s2>>s3>>s4;
	if(s1[0]=='0') a1=s1[1]-'0';
	else a1=s1[1]-'0'+10;
	if(s2[0]=='0') a2=s2[1]-'0';
	else a2=s2[1]-'0'+10;
	if(s3[0]=='0') b1=s3[1]-'0';
	else b1=s3[1]-'0'+10;
	if(s4[0]=='0') b2=s4[1]-'0';
	else b2=s4[1]-'0'+10;
	a3=s2[2]-'A';
	b3=s4[2]-'A';
	cout<<(a1==b1);
	cout<<(a1==b1&&a2==b2);
	cout<<(a1==b1&&a2==b2&&((a3<=2&&b3<=2)||(a3>2&&b3>2)));
	cout<<(a1==b1&&a2==b2&&((a3<=2&&b3<=2)||(a3>2&&b3>2))&&((a3<=2&&abs(b3-a3)==1)||a3>2));
	return 0;
}
