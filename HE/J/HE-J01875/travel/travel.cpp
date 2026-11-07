#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	int s11,s22;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C')s11=1;
	else s11=2;
	if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C')s22=1;
	else s22=2;
	if(c1==c2)cout<<1;
	else cout<<0;
	if(s1[1]==s2[1])cout<<1;
	else cout<<0;
	if(s1[1]==s2[1]&&s11==s22)cout<<1;
	else cout<<0;
	if(s1[1]==s2[1]&&s1[2]=='A'&&s2[2]=='B'||s1[1]==s2[1]&&s1[2]=='B'&&s2[2]=='A'||s1[1]==s2[1]&&s1[2]=='B'&&s2[2]=='C'||s1[1]==s2[1]&&s1[2]=='C'&&s2[2]=='B'||s1[1]==s2[1]&&s1[2]=='D'&&s2[2]=='F'||s1[1]==s2[1]&&s1[2]=='F'&&s2[2]=='D'){
		cout<<1;
	}else cout <<0;
	
	
	
	return 0;
} 
