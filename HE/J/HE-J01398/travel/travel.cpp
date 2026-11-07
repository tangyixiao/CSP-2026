#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c,s,ca,sa;
	cin>>c>>s>>ca>>sa;
	if(c==ca){
		cout<<"1";
	}
	else if(c!=ca){
		cout<<"0";
	}
	if(c==ca){
    	if(s[0]==sa[0]&&s[1]==sa[1]){
    		cout<<"1";
    	}
    	else if(s[0]!=sa[0]||s[1]!=sa[1]){
    		cout<<"0";
    	}
	}
	else if(c!=ca){
		cout<<"0";
	}
	if(c==ca){
	    if(s[0]==sa[0]&&s[1]==sa[1]){
	    	if((s[2]=='A'&&sa[2]=='B')||(s[2]=='B'&&sa[2]=='A')||(s[2]=='C'&&sa[2]=='A')||(s[2]=='A'&&sa[2]=='C')||(s[2]=='B'&&sa[2]=='C')||(s[2]=='C'&&sa[2]=='B')||(s[2]=='D'&&sa[2]=='F')||(s[2]=='F'&&sa[2]=='D')){
	    		cout<<"1";
	    	}
	     	else cout<<"0";
	    }
    	else if(s[0]!=sa[0]||s[1]!=sa[1]){
    		cout<<"0";
    	}
    }
	else if(c!=ca){
		cout<<"0";
	}
	if(c==ca){
	    if(s[0]==sa[0]&&s[1]==sa[1]){
	    	if((s[2]=='A'&&sa[2]=='B')||(s[2]=='B'&&sa[2]=='A')||(s[2]=='B'&&sa[2]=='C')||(s[2]=='C'&&sa[2]=='B')||(s[2]=='D'&&sa[2]=='F')||(s[2]=='F'&&sa[2]=='D')){
	    		cout<<"1";
	    	}
	     	else cout<<"0";
	    }
    	else if(s[0]!=sa[0]||s[1]!=sa[1]){
    		cout<<"0";
    	}
    }
	else if(c!=ca){
		cout<<"0";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
