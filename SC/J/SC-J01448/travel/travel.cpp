#include<bits/stdc++.h>
#define int long long
using namespace std;
int a,b;
string s1,s2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>s1>>b>>s2;
	if(a==b)cout<<1;
	else cout<<0;
	if(s1[0]+s1[1]==s2[0]+s2[1]&&(a==b))cout<<1;
	else cout<<0;
	if(((s1[2]=='D'&&s2[2]=='F')||(s2[2]=='D'&&s1[2]=='F'))||((s1[2]!='D'&&s2[2]!='F')&&(s2[2]!='D'&&s1[2]!='F'))&&(s1[0]+s1[1]==s2[0]+s2[1]&&(a==b)))cout<<1;
	else cout<<0;
	if((((s1[2]=='D'&&s2[2]=='F')||(s2[2]=='D'&&s1[2]=='F'))||abs((s1[2])-(s2[2]))==1)&&((s1[2]=='D'&&s2[2]=='F')||(s2[2]=='D'&&s1[2]=='F'))||((s1[2]!='D'&&s2[2]!='F')&&(s2[2]!='D'&&s1[2]!='F'))&&(s1[0]+s1[1]==s2[0]+s2[1]&&(a==b)))cout<<1;
	else cout<<0;
	return 0;
}