#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool m=0;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1[0]==c2[0]&&c1[1]==c2[1]) cout<<"1";
	else {
		cout<<"0000";
		return 0;
	}
	for(int i=0;i<2;i++){
		if(s1[i]==s2[i])m=1;
		else m=0;
	}
	if(m)cout<<"1";
	else {
		cout<<"000";
		return 0;
	}
	m=0;
	if(((s1[2]<='C'&&s1[2]>='A')&&(s2[2]<='C'&&s2[2]>='A'))||((s1[2]=='D'||s1[2]=='F')&&(s2[2]=='D'||s2[2]=='F'))) cout<<"1";
	else {
		cout<<"00";
		return 0;
	}
	if((max(s1[2],s2[2])-min(s1[2],s2[2])==1)||((s1[2]=='D'||s1[2]=='F')&&(s2[2]=='D'||s2[2]=='F'))) cout<<"1";
	else cout<<"0";
	return 0;
} 
