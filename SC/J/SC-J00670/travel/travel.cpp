#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	char s1[5],s2[5];
	cin>>c1;
	for(int i=1;i<=3;i++)
		cin>>s1[i];
	cin>>c2;
	for(int i=1;i<=3;i++)
		cin>>s2[i];
	
	if(c1!=c2) cout<<"0000";
	if(c1==c2){
		cout<<"1";
		if(s1[1]==s2[1]&&s1[2]==s2[2]) cout<<"1";
		if(s1[1]!=s2[1]||s1[2]!=s2[2]) cout<<"000";
		if(s1[1]==s2[1]&&s1[2]==s2[2]){
		
		if(s1[3]=='A'){
			if(s2[3]=='B') cout<<"11";
			if(s2[3]=='C') cout<<"10";
			if(s2[3]=='D'||s2[3]=='E') cout<<"00";
		}
		if(s1[3]=='B'){
			if(s2[3]=='C'||s2[3]=='A') cout<<"11";
			if(s2[3]=='D'||s2[3]=='E') cout<<"00";
		}
		if(s1[3]=='C'){
			if(s2[3]=='B') cout<<"11";
			if(s2[3]=='A') cout<<"10";
			if(s2[3]=='D'||s2[3]=='E') cout<<"00";
		}
		if(s1[3]=='D'||s2[3]=='E'){
			if(s2[3]=='E'||s2[3]=='D') cout<<"11";
			if(s2[3]=='A'||s2[3]=='B'||s2[3]=='C') cout<<"00";
		}	
	} }
	return 0;
}