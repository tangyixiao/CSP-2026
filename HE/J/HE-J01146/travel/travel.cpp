#include <bits/stdc++.h>
using namespace std;

freopen("travel.in","r",stdin);
freopen("travel.out","w",stdout);

string a,s,d,f;



int main(){
	cin>>a>>s>>d>>f;
	
	if(a==d){
		cout<<1;
	}
	else{
		cout<<0000;
		return 0;
	}
	
	if(s[0,1]==f[0,1]){
		cout<<1;
	}
	else{
		cout<<0;
	}
	
	
	if(s[2,2]>='D'&&f[2,2]>='D'){
		cout<<1;
	}
	else if(s[2,2]<='C'&&f[2,2]<='C'){
		cout<<1;
	}
	else{
		cout<<0;
	}
	
	
	
	if(s[2,2]+1==f[2,2]||s[2,2]-1==f[2,2]){
		
		
		cout<<1;
	}
	
	else{
		
		cout<<0;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
