#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool f1=1,f2=1,f3=0,f4=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	for(int i=0;i<2;i++){
		if(c1[i]!=c2[i])f1=false;
	}
	if(!f1){
		cout<<"0000";
		return 0;
	}
	for(int i=0;i<2;i++){
		if(s1[i]!=s2[i])f2=false;
	}
	if(!f2){
		cout<<"1000";
		return 0; 
	}
	if(s1[2]=='A'&&s2[2]=='B')f3=1;
	if(s1[2]=='A'&&s2[2]=='C')f3=1;
	if(s1[2]=='B'&&s2[2]=='C')f3=1;
	if(s1[2]=='B'&&s2[2]=='A')f3=1;
	if(s1[2]=='B'&&s2[2]=='C')f3=1;
	if(s1[2]=='C'&&s2[2]=='A')f3=1;
	
	if(s1[2]=='D'&&s2[2]=='F')f3=1;
	if(s1[2]=='F'&&s2[2]=='D')f3=1;
	
	if(!f3){
		cout<<"1100";
		return 0;
	}
	if( abs( (int)s1[2]-(int)s2[2])==1)f4=1;
	if(!f4)cout<<"1110";
	else cout<<"1111";
	return 0;
} 
