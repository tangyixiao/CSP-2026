#include<bits/stdc++.h>
using namespace std;
string C,S;
string c,s;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>C>>c>>S>>s;
	if(C==S){
		cout<<"1";
	}
	else{
		cout<<"0000";
		return 0;
	}
	if(c[0]==s[0]&&c[1]==s[1]){
		cout<<"1";
	}
	else{
		cout<<"000";
		return 0;
	}
	if(s[2]=='F'&&c[2]=='D'||s[2]=='D'&&c[2]=='F'){
		cout<<"1";
	}
	else if(s[2]=='A'&&c[2]=='B'||s[2]=='A'&&c[2]=='C'||s[2]=='B'&&c[2]=='A'||s[2]=='B'&&c[2]=='C'||s[2]=='C'&&c[2]=='A'||s[2]=='C'&&c[2]=='B'){
		cout<<"1";
	}
	else{
		cout<<"00";
		return 0;
	}
	if(c[2]+1==s[2]||c[2]-1==s[2]){
		cout<<"1";
	}
	else{
		cout<<"0";
		return 0;
	}
	return 0;
}
