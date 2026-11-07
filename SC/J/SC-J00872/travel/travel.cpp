#include<bits/stdc++.h>
using namespace std;
int a[3];
string s2,s4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a[1]>>s2>>a[3]>>s4;
	if(a[1]==a[3]){
		cout<<"1";
	}
	else{
		cout<<"0"<<"0"<<"0"<<"0";
		return 0;
	}
	if(s2[0]==s4[0] && s2[1]==s4[1]){
		cout<<"1";
	}
	else{
		cout<<"0"<<"0"<<"0";
		return 0;
	}
	
	if(s2[0]==s4[0] && s2[1]==s4[1]){
	
	if(s2[2]=='A' && s4[2]=='A'||s4[2]=='B'||s4[2]=='C' ){
		cout<<"1";
		
		if(s4[2]=='B'){
		cout<<"1";
	}
		else{
			cout<<"0";
		}
		return 0;
	} 
}
	if(s2[2]=='B' && s4[2]=='A'||s4[2]=='B'||s4[2]=='C' ){
		cout<<"1";
		
			if(s4[2]=='A'||s4[2]=='C'){
		cout<<"1";
	}
		else{
			cout<<"0";
		}
		return 0;

	}
	if(s2[2]=='C' && s4[2]=='A'||s4[2]=='B'||s4[2]=='C' ){
		cout<<"1";
		
		if(s4[2]=='B'){
		cout<<"1";
	}
	    else{
	    	cout<<"0";
		}
		
		return 0;
	}
	if(s2[2]=='D' && s4[2]=='F'){
		cout<<"1"<<"1";
		
		
		return 0;
	}
	if(s2[2]=='F' && s4[2]=='D' ){
		cout<<"1"<<"1";
	
		return 0;
	}
	if(s2[2]=='A' &&s4[2]=='D'||s4[2]=='F'){
		cout<<"0"<<"0";
	}
    if(s2[2]=='B' &&s4[2]=='D'||s4[2]=='F'){
		cout<<"0"<<"0";
	}
    if(s2[2]=='C' &&s4[2]=='D'||s4[2]=='F'){
		cout<<"0"<<"0";
	}
    if(s2[2]=='D' &&s4[2]=='A'||s4[2]=='B'||s4[2]=='C'){
		cout<<"0"<<"0";
	}
    if(s2[2]=='F' &&s4[2]=='A'||s4[2]=='B'||s4[2]=='C'){
		cout<<"0"<<"0";
	}
	fclose(stdin);fclose(stdout);
	return 0;
}