#include<bits/stdc++.h>
using namespace std;
bool position(char c){
	if(c>='A'&&c<='C'){
		return false;
	}
	if(c=='D'||c=='F'){
		return true;
	}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	bool f;
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
	}else{
		cout<<"0000";
		return 0; 
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	if(position(s1[2])==position(s2[2])){
		cout<<1;
		f=position(s1[2]);
	}else{
		cout<<"00";
		return 0;
	}
	if(f||s1[2]=='B'||s2[2]=='B'){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}
