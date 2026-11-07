#include<bits/stdc++.h>
using namespace std;
#define int long long
string c1;string s1;string c2;string s2;
void check(){
	int b=true;
	if(c1==c2) cout<<1;
	else{
		cout<<0;
		b=false;
	}
	if(b){
		for(int i=0;i<=1;++i){
		    if(s1[i]!=s2[i]){
			    b=false;
		    }
	    }
	}
	if(b) cout<<1;
	else{
		cout<<0;
		b=false;
	}
	if(b){
		if((s1[2]=='A')||(s1[2]=='B')||(s1[2]=='C')){
			if((s2[2]=='A')||(s2[2]=='B')||(s2[2]=='C')){
				b=true;
			}else b=false;
		}else if((s1[2]=='D')||(s1[2]=='F')){
			if((s2[2]=='D')||(s2[2]=='F')){
				b=true;
			}else b=false;
		}
	}
	if(b) cout<<1;
	else{
		cout<<0;
		b=false;
	}
	if(b){
		if(s1[2]=='A'){
			if(s2[2]=='B'){
				b=true;
			}else b=false;
		}else if(s1[2]=='B'){
			if(s2[2]=='A'||s2[2]=='C'){
				b=true;
			}else b=false;
		}else if(s1[2]=='C'){
			if(s2[2]=='B'){
				b=true;
			}else b=false;
		}else if(s1[2]=='D'){
			if(s2[2]=='F'){
				b=true;
			}else b=false;
		}else if(s1[2]=='F'){
			if(s2[2]=='D'){
				b=true;
			}else b=false;
		}
	}
	if(b) cout<<1;
	else{
		cout<<0;
		b=false;
	}
	return;
}
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	check();
	return 0;
} 
