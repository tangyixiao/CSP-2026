#include<bits/stdc++.h>
using namespace std;
int n,m;
string s,l;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>n>>s>>m>>l;
	if(n==m){
		cout<<1; 
		if(s[0]==l[0]&&s[1]==l[1]){
		cout<<1;
		if(s[2]>='A'&&l[2]<='C'||l[2]>='A'&&s[2]<='C'||s[2]=='D'&&l[2]=='F'||l[2]=='D'&&s[2]=='F'){
			cout<<1;
			if(s[2]=='D'&&l[2]=='F'||l[2]=='D'&&s[2]=='F'||s[2]=='A'&&l[2]=='B'||s[2]=='B'&&l[2]=='C'||l[2]=='A'&&s[2]=='B'||l[2]=='B'&&s[2]=='C'){
		cout<<1;
	}else{
		cout<<0;
	}
		}else{
		    cout<<0<<0; 		    
		}
	}else{
		cout<<0<<0<<0;
	}
	
	}else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	
	return 0;
} 
