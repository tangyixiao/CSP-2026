#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	bool k=0,k1=1;
	string s1,s2;
	cin>>a>>s1>>b>>s2;
	if(a==b)cout<<1;
	else {
		cout<<"0000";
		return 0;
	}
	if(s1.substr(0,2)==s2.substr(0,2)) cout<<1;
	else {
		cout<<"000";
		return 0;
	}
	if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C'){
		if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'){
			cout<<1;
			k=1;
		}else{
			cout<<0;
		}
	}else{
		if(s2[2]=='D'||s2[2]=='F'){
			cout<<1;
			k=1;
		}
		else cout<<0;
	}
	int cnt=s1[2]-'0';
	int ans=s2[2]-'0';
	if(k&&max(ans,cnt)-min(ans,cnt)==1)cout<<1;
	else cout<<0;
	return 0;
} 
