#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
signed main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(s1<s2)swap(s1,s2);
	if(c1==c2)cout<<1;
	else cout<<0;
	if(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1])cout<<1;
	else cout<<0;
	if(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1]&&(s1[2]<='C')==(s2[2]<='C'))cout<<1;
	else cout<<0;
	if(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1]&&(s1[2]<='C')==(s2[2]<='C')&&s1[2]-s2[2]==1)cout<<1;
	else cout<<0;
	return 0;
}