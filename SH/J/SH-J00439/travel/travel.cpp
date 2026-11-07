#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
char a,b;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);	
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) cout<<"1";
	else{
		cout<<"0000";
		return 0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]) cout<<"1";
	else{
		cout<<"000";
		return 0;
	}
	a=s1[2],b=s2[2];
	if((a=='D'&&b=='F')||(a=='F'&&b=='D')){
		cout<<"11";
		return 0;
	}
	if((a=='C'&&b=='D')||(a=='D'&&b=='C')){
		cout<<"00";
		return 0;
	}
	if(a-1==b||a+1==b){
		cout<<"11";
		return 0;
	}
	if((a=='C'&&b=='A')||(a=='A'&&b=='C')){
		cout<<"10";
		return 0;
	}
	cout<<"00";
	return 0;
} 
