#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	string o,a,p,b;
	cin>>o>>a>>p>>b;
	if(o==p) cout<<1;
	else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	
	if(o==p && a[0]==b[0] && a[1]==b[1]) cout<<1;
	else{
		cout<<0<<0<<0;
		return 0;
	}
	
	bool flag=false;
	if(a[2]=='F' && b[2]=='D'){
		cout<<1;
		flag=true;
	}
	else if(a[2]=='D' && b[2]=='F'){
		cout<<1;
		flag=true;
	}
	else if(a[2]=='A'){
		if(b[2]=='B' || b[2]=='C'){
			cout<<1;
			flag=true;
		}
	}
	else if(a[2]=='C'){
		if(b[2]=='A' || b[2]=='B'){
			cout<<1;
			flag=true;
		}
	}
	else if(a[2]=='B'){
		if(b[2]=='A' || b[2]=='C'){
			cout<<1;
			flag=true;
		}
	}
	if(!flag){
		cout<<0<<0;
		return 0;
	}
	
	flag=false;
	if(a[2]=='F' && b[2]=='D'){
		cout<<1;
		flag=true;
	}
	else if(a[2]=='D' && b[2]=='F'){
		cout<<1;
		flag=true;
	}
	else if(a[2]=='A' || a[2]=='C'){
		if(b[2]=='B'){
			cout<<1;
			flag=true;
		}
	}
	else if(a[2]=='B'){
		cout<<1;
		flag=true;
	}
	if(!flag) cout<<0;
	return 0;
} 
