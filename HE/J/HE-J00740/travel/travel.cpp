#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	getline(cin,s);
	if(s[0]==s[3]){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(s[4]==s[11]){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(s[5]=='A'||s[5]=='B'||s[5]=='C'){
		if(s[12]=='A'||s[12]=='B'||s[12]=='C')
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(s[4]+1==s[11]||s[5]+1==s[12]){
		cout<<1;
	}
	else{
		cout<<0;
	}
	return 0;
}
