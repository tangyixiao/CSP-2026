#include<bits/stdc++.h>
using namespace std;
map<char,int>mp;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	if(s1==s3) cout<<1;
	else{
		cout<<0<<0<<0<<0;
		return 0;
	} 
	if(s2[0]==s4[0]&&s2[1]==s4[1]) cout<<1;
	else {
		cout<<0<<0<<0;
		return 0;
	}
	char c1=s2[2],c2=s4[2];
	mp['F']=0,mp['D']=0,mp['C']=1,mp['B']=1,mp['A']=1;
	if(mp[c1]==mp[c2]) cout<<1;
	else{
		cout<<0<<0;
		return 0;
	}
	if((c1=='A'&&c2=='C')||(c1=='C'&&c2=='A')) cout<<0;
	else cout<<1;
	return 0;
} 