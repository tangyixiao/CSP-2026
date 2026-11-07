#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	cin>>c1>>s1>>c2>>s2;
	if(c1 == c2)cout<<1;
	else{
		cout<<0<<0<<0<<0;
		return 0;
	} 
	string S1 = s1.substr(0,2);
	string S2 = s2.substr(0,2);
	if(S1 == S2){
		cout<<1;
	}
	else{
		cout<<0<<0<<0;
		return 0;
	} 
	if(s1[2]<='C'&&s2[2]<='C' || s1[2]>'C'&&s2[2]>'C'){
		cout<<1;
	}else{
		cout<<0<<0;
		return 0;
	} 
	if(s1[2] == 'D'&&s2[2] == 'F'||s1[2] == 'F'&&s2[2] == 'D'){
		cout<<1;
	}
	else if(abs(int(s1[2])-int(s2[2])) == 1){
		cout<<1;
	}
	else{
		cout<<0;
		return 0;
	}
	return 0;
}