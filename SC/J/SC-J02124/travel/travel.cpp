#include<bits/stdc++.h>
using namespace std;
int c1,s1;
string c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int k0=0;
	cin>>c1>>c2>>s1>>s2;
	if(c1==s1)cout<<1,k0=1;
	else cout<<0;
	if(k0==0){
		cout<<"000";
		return 0;
	}
	int k=0;
	if(c2[1]==s2[1]&&c2[0]==s2[0])cout<<1,k=1;
	else cout<<0;
	if(k==0){
		cout<<"00";
		return 0;
	}
	int k1=0;
	if((c2[2]=='A'||c2[2]=='B'||c2[2]=='C')&&(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'))cout<<1,k1=1;
	else if((c2[2]=='D'||c2[2]=='F')&&(s2[2]=='D'||s2[2]=='F'))cout<<1,k1=1;
	else cout<<0;
	if(k1==0){
		cout<<0;
		return 0;
	}
	else if(c2[2]=='B'){
		if(s2[2]=='A'||s2[2]=='C')cout<<1;
		else cout<<0;
	}
	else if(c2[2]=='A'||c2[2]=='C'){
		if(s2[2]=='B')cout<<1;
		else cout<<0;
	}
	else if(c2[2]=='D'||c2[2]=='F'){
		if(s2[2]=='F'||s2[2]=='D')cout<<1;
		else cout<<0;
	}
	return 0;
} 