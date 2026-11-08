#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	int a=0,b=0;
	if(c1==c2) cout<<"1";
	else{
	    cout<<"0000";
	    return 0; 
    }
    
	for(int i=0;i<2;i++){
		a+=a*10+(s1[i]-'0');
	}
	for(int i=0;i<2;i++){
		b+=b*10+(s2[i]-'0');
	}
	if(a==b) cout<<"1";
	else{
		cout<<"000";
		return 0;
	}
	
	if(s1[2]=='A'){
		if(s2[2]=='B'||s2[2]=='C'){
			cout<<"1";
		}
	}
	else if(s1[2]=='B'){
		if(s2[2]=='A'||s2[2]=='C'){
			cout<<"1";
		}
	}
	else if(s1[2]=='C'){
		if(s2[2]=='A'||s2[2]=='B'){
			cout<<"1";
		}
	}
	else if(s1[2]=='D'&&s2[2]=='F'){
		cout<<"11";
		return 0;
	}
	else if(s1[2]=='F'&&s2[2]=='D'){
		cout<<"11";
		return 0;
	}
	else{
		cout<<"00";
		return 0;
	}
	
	if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C'){
		if(abs(s1[2]-s2[2])==1) cout<<"1";
	    else cout<<"0";
	}
	else{
		if(abs(s1[2]-s2[2])==2) cout<<"1";
	    else cout<<"0";
	}
	return 0;
}
