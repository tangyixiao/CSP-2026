#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	cout<<"1";
	if(s1[0]!=s2[0]||s1[1]!=s2[1]){
		cout<<"000";
		return 0;
	}
	cout<<"1";
	int s5,s6;
	if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C'){
		s5=1;
	}
	else if(s1[2]=='D'||s1[2]=='F'){
		s5=2;
	}
	if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'){
		s6=1;
	}
	else if(s2[2]=='D'||s2[2]=='F'){
		s6=2;
	}
	if(s5!=s6){
		cout<<"00";
		return 0;
	}
	cout<<"1";
	if(s5==2){
		cout<<"1";
		return 0;
	}
	if(abs(s1[2]-s2[2])==1){
		cout<<"1";
	}else{
		cout<<"0";
	}
	return 0;
} 
