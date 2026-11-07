#include<bits/stdc++.h>
#define int long long
using namespace std;
string s1,s2,s3,s4;
char c1,c2;
bool f=1,f2=1,f3;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s2>>s3>>s4;
	if(s1==s3)cout<<1;
	else cout<<0;
	for(int i=0;i<s2.size()-1;i++)if(s2[i]!=s4[i])f=0;
	if(s1==s3&&f)cout<<1;
	else cout<<0;
	c1=s2[s2.size()-1],c2=s4[s4.size()-1];
	if(c1=='D'&&c2=='C'||c1=='D'&&c2=='B'||c1=='D'&&c2=='A'||c1=='F'&&c2=='C'||c1=='F'&&c2=='B'||c1=='F'&&c2=='C')f2=0;
	swap(c1,c2);
	if(c1=='D'&&c2=='C'||c1=='D'&&c2=='B'||c1=='D'&&c2=='A'||c1=='F'&&c2=='C'||c1=='F'&&c2=='B'||c1=='F'&&c2=='C')f2=0;
	if(s1==s3&&f&&f2)cout<<1;
	else cout<<0;
	if(c1=='F'&&c2=='D'||c1=='D'&&c2=='F'||c1=='C'&&c2=='B'||c1=='B'&&c2=='C'||c1=='A'&&c2=='B'||c1=='B'&&c2=='A')f3=1;
	if(s1==s3&&f&&f2&&f3)cout<<1;
	else cout<<0;
	return 0;
}
