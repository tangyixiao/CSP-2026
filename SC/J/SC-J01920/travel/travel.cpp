#include<bits/stdc++.h>
using namespace std;
long long a,c;
string b,d;
int main (){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if (a!=c){
		cout<<"0000";	
		return 0;
	}
	if(a==c) cout<<1;
	if(b[0]==d[0]&&b[1]==d[1]){
		cout<<"1";	
	}
	else {
		cout<<"000";
		return 0;
	}
	if(b[2]=='A' or b[2]=='B' or b[2]=='C'){
		if(d[2]=='A' or d[2]=='B' or d[2]=='C') cout<<1;
		else {
			cout<<"00";	
			return 0;		
		}	
	}
	else {
		if(d[2]=='F' or d[2]=='D') {
			cout<<"11";
			return 0;
		}
		else {
			cout<<"00";	
			return 0;
		}	
	}
	if(b[2]+1==d[2] or b[2]-1==d[2]) cout<<"1";
	else cout<<"0";
	return 0;
}