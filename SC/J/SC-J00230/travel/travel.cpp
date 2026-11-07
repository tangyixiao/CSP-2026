#include<bits/stdc++.h>
using namespace std;
bool cmp=1;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	string n,m;
	cin>>a>>n>>b>>m;
	if(a==b) cout<<"1";
	else{
		cout<<"0000";
		return 0;	
	}
	if(n[1]!=m[1] || n[0]!=m[0]){
		cout<<"000";
		return 0;
	}
	else cout<<"1";
	if((n[2]<='C' && m[2]>='D') || (m[2]<='C' && n[2]>='D')){
		cout<<"00";
		return 0;
	} 
	else cout<<"1";
	if(n[2]=='D' || m[2]=='D') cout<<"1";
	else if(n[2]=='F' || m[2]=='F') cout<<"1";
	else if(n[2]=='A' && m[2]=='B') cout<<"1";
	else if(n[2]=='B' && m[2]=='C') cout<<"1";
	else if(m[2]=='A' && n[2]=='B') cout<<"1";
	else if(m[2]=='B' && n[2]=='C') cout<<"1";
	else cout<<"0";
	return 0;
} 