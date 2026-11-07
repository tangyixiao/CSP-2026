#include<bits/stdc++.h>
using namespace std;
string a,s,d,f;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>s>>d>>f;
	bool p=1,q=1,w=1,e=1;
	for(int i=0;i<2;i++){
		if(a[i]!=d[i]){
			p=0;
		}
		if(s[i]!=f[i]){
			q=0;
		}
	}
	if(s[2]=='A'||s[2]=='B'||s[2]=='C'){
		if(f[2]=='D'||f[2]=='F'){
			w=0;
		}
	}
	else{
		if(f[2]=='A'||f[2]=='B'||f[2]=='C'){
			w=0;
		}
	}
	if(!w){
		e=0;
	}
	else{
		if(s[2]=='A'||s[2]=='C'){
			if(f[2]!='B'){
				e=0;
			}
		}
	}
	if(!p){
		cout<<"0000";	
		return 0;
	} 
	if(!q){
		cout<<"1000";	
		return 0;
	}
	if(!w){
		cout<<"1100";	
		return 0;
	}
	if(!e){
		cout<<"1110";	
		return 0;
	}
	cout<<"1111";
	return 0;
}