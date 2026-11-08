#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel,in","r",stdin);
	freopen("travel,out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	string da;
	if(c1==c2){
		da="1000";
	}else{
		da="0000";
		cout<<da;
		return 0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]){
		da="1100";
	}else{
		cout<<da;
		return 0;
	}
	bool a1=0,a2=0;
	if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C'){
		a1=1;
	}
	if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'){
		a2=1;
	}
	if(a1==a2){
		da="1110";
	}else{
		cout<<da;
		return 0;
	}
	int b1=s1[2]-'0';
	int b2=s2[2]-'0';
	if(b1-1==b2||b1+1==b2){
		da="1111";
	}
	cout<<da;
	return 0;
} 
