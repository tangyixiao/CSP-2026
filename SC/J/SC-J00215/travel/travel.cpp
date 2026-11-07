#include <bits/stdc++.h>
using namespace std;
bool tc,xl;
int main(){
	string s1,s2,s3,s4;
	cin>>s1;
	cin>>s2;
	cin>>s3;
	cin>>s4;
	if(s1==s3){
		cout<<1;
	}else{
		cout<<0000;
		return 0;
	}
	if(s2[0]==s4[0] && s2[1]==s4[1]){
		cout<<1;
		if(s2[2]<='C' && s2[2]>='A'){
		    if(s4[2]<='C' && s2[2]>='A'){
		        cout<<1;
		        tc=1;
		        if(s2[2]==s4[2]+1 || s2[2]==s4[2]-1){
		        	cout<<1;
		        	xl=1;
				}
	        }
	    }else{
		    if(s4[2]<='F' && s2[2]>='D'){
		        cout<<1;
		        tc=1;
		        if(s2[2]==s4[2]+1 || s2[2]==s4[2]-1){
		        	cout<<1;
		        	xl=1;
				}
	        }
	    }
	}else{
		cout<<000;
		return 0;
	}
	if(!tc){
		cout<<0;
	}
	if(!xl){
		cout<<0;
	}
	return 0;
} 