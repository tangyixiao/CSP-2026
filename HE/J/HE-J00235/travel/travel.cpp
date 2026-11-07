#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char a,z;
	char c1,c2;
	char s1[a],s2[z];
	cin>>c1>>s1[a]>>c2>>s2[z];
	
	if(c1==c2){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(s1[0]==s2[0]||s1[1]==s2[1]){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(s1[2]!=65||s2[2]!=65){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(s1[a]+2!=s2[z]){
		cout<<1;
	}
	else{
		cout<<0;
	}
	
	return 0;
} 
