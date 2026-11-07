#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a=="01" or a=="16" or c=="01" or c=="16"){
		cout<<0<<0<<0<<0;
		return 0;
	}
	if(a==c)cout<<1;
	else{
		cout<<0<<0<<0<<0;
		return 0;
	} 
	if(b[0]+b[1]==d[0]+d[1])cout<<1;
	else{
		cout<<0<<0<<0;
		return 0;
	}
	if(b[2]=='A' or b[2]=='B' or b[2]=='C'){
		if(d[2]=='A' or d[2]=='B' or d[2]=='C')cout<<1;
		else{
			cout<<0<<0;
			return 0;
		} 
	}
	if(b[2]=='D' or b[2]=='F'){
		if(d[2]=='D' or d[2]=='F')cout<<1;
		else{
			cout<<0<<0;
			return 0;
		} 
	}
	if(b[2]=='A'){
		if(d[2]=='B')cout<<1;
		else{
			cout<<0;
			return 0;
		}
	}
	if(b[2]=='B'){
		if(d[2]=='C' or d[2]=='A')cout<<1;
		else{
			cout<<0;
			return 0;
		}
	}
	if(b[2]=='C'){
		if(d[2]=='B')cout<<1;
		else{
			cout<<0;
			return 0;
		}
	}
	if(b[2]=='D'){
		if(d[2]=='F')cout<<1;
		else{
			cout<<0;
			return 0;
		}
	}
	if(b[2]=='F'){
		if(d[2]=='D')cout<<1;
		else{
			cout<<0;
			return 0;
		}
	}
	return 0;
}
