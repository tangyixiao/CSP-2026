#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,s2,s3,s4;cin>>s1>>s2>>s3>>s4;
	int ache=0,bche=0;char aa,bb;
	for(int i=0;i<s1.size();i++){
		ache*=10;ache+=(int(s1[i]-'0'));
	}
	for(int i=0;i<s3.size();i++){
		bche*=10;bche+=(int(s3[i]-'0'));
	}
	if(ache==bche)cout<<"1";
	else{cout<<"0000";return 0;}
	//////////////////////////
	ache=0;bche=0;
	for(int i=0;i<s2.size();i++){
		if(s2[i]>'9'||s2[i]<'0'){
			aa=s2[i];
			continue;
		}
		ache*=10;ache+=(int(s2[i]-'0'));
	}
	for(int i=0;i<s4.size();i++){
		if(s4[i]>'9'||s4[i]<'0'){
			bb=s4[i];
			continue;
		}
		bche*=10;bche+=(int(s4[i]-'0'));
	}
	if(ache==bche)cout<<"1";
	else{cout<<"000";return 0;}
	///////////////////
	if(aa=='A'||aa=='B'||aa=='C')ache=1;
	else ache=0;
	if(bb=='A'||bb=='B'||bb=='C')bche=1;
	else bche=0;
	if(ache==bche)cout<<"1";
	else{cout<<"00";return 0;}
	///////////////////////
	if(aa=='A')ache=1;
	else if(aa=='B')ache=2;
	else if(aa=='C')ache=3;
	else if(aa=='D')ache=4;
	else ache=5;
	if(bb=='A')bche=1;
	else if(bb=='B')bche=2;
	else if(bb=='C')bche=3;
	else if(bb=='D')bche=4;
	else bche=5;
	if(ache-bche==1||bche-ache==1)cout<<"1";
	else cout<<"0";
	return 0;
}
