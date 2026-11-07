#include<bits/stdc++.h>
using namespace std;
string s,ss;
long long a,b;
bool bb;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>s>>b>>ss;
	if(a==b){
		cout<<"1";
	}else{
		cout<<"0000";
		return 0;
	}
	
	
	if(s[0]==ss[0]&&s[1]==ss[1]){
		cout<<"1";
		bb=1;
	}else{
		cout<<"0";
	}
	
	
	if(s[2]>='A'&&ss[2]<='C'&&bb){
		cout<<"1";
	}else if(s[2]=='D'&&ss[2]=='F'&&bb){
		cout<<"1";
	}else if(s[2]=='F'&&ss[2]=='D'&&bb){
		cout<<"1";
	}else{
		cout<<"0";
	}
	
	
	if(bb){
		if(s[2]=='A'&&ss[2]=='B'){
			cout<<"1";
		}else if(s[2]=='B'&&ss[2]=='C'){
			cout<<"1";
		}else if(s[2]=='D'&&ss[2]=='F'){
			cout<<"1";
		}else if(s[2]=='F'&&ss[2]=='D'){
			cout<<"1";
		}else if(s[2]=='C'&&ss[2]=='B'){
			cout<<"1";
		}else if(s[2]=='B'&&ss[2]=='A'){
			cout<<"1";
		}else{
			cout<<"0";
		}
	}else{
		cout<<"0";
	}
	return 0;
}