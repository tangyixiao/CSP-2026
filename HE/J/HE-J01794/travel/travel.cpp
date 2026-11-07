#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,c;
	string b,d;
	cin>>a>>b>>c>>d; 
	if(a&&c==01&&06){
		cout<<0;
	}
	else{
		if(a!=c){
			cout<<0;
		}
		else{
			cout<<1;
		}
	}
	if(b[0,1]==d[0,1]){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(((b[2]=='A'||'B'||'C') && (d[2]=='A'||'B'||'C')) || ((b[2]=='D'||'F')&& (d[2]=='D'||'F'))){
		cout<<1;
	}
	else{
		cout<<0;
	}
	
	return 0;
} 
