#include<bits/stdc++.h>
using namespace std;
string n,m,s,t;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.in","w",stdout);
	cin>>n>>m>>s>>t;
	if(n==s) cout<<1;
	else{
		cout<<"0000"<<endl;
		return 0;
	}
	if(m[0]==t[0]&&m[1]==t[1]) cout<<1;
	else{
		cout<<"000"<<endl;
		return 0;
	}
	if(m[2]<='C'&&t[2]<='C'||m[2]>'C'&&t[2]>'C') cout<<1;
	else{
		cout<<"00"<<endl;
		return 0;
	}	
	if(abs(m[2]-t[2])==1&&m[2]!='D'&&t[2]!='D'||m[2]=='D'&&t[2]=='F'||m[2]=='F'&&t[2]=='D') cout<<1;
	else cout<<"0"<<endl;
	return 0;
}
