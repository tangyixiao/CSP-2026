#include<bits/stdc++.h>
using namespace std;
string c,d,s,t;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    cin>>c>>s>>d>>t;
	if(c[0]==d[0]||c[1]==d[1]){
	    cout<<1;
    }else{
    	cout<<"0000";
    	return 0;
	}
	if(s[0]==t[0]&&s[1]==t[1]){
		cout<<1;
    }else{
    	cout<<"000";
    	return 0;
	}
	if(s[2]=='A'&&t[2]=='B'||s[2]=='A'&&t[2]=='C'||s[2]=='B'&&t[2]=='C'||s[2]=='B'&&t[2]=='A'||s[2]=='C'&&t[2]=='B'||s[2]=='C'&&t[2]=='A'||s[2]=='D'&&t[2]=='F'||s[2]=='F'&&t[2]=='D'){
		cout<<1;
	}else{
		cout<<"00";
		return 0;
	}
	if(s[2]=='A'&&t[2]=='B'||s[2]=='B'&&t[2]=='A'||s[2]=='B'&&t[2]=='C'||s[2]=='C'&&t[2]=='B'||s[2]=='D'&&t[2]=='F'||s[2]=='F'&&t[2]=='D'){
		cout<<1;
    }else{
    	cout<<"0";
	}
	return 0;
}
