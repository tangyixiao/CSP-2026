#include<bits/stdc++.h>
using namespace std;
string a,b,c,d,ans;
string n,m;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>a>>b>>c>>d;
	n=b.substr(0,2);m=d.substr(0,2);
	if(a==c) ans+='1';
	else{cout<<"0000";return 0;}
	if(n==m) ans+='1';
	else{cout<<"1000";return 0;}
	if((b[2]<='C'&&d[2]<='C')||(b[2]>='D'&&d[2]>='D')) ans+='1';
	else{cout<<"1100";return 0;}
	if((b[2]=='D'&&d[2]=='F')||(b[2]=='F'&&d[2]=='D')) ans+='1';
	else if((b[2]=='A'&&d[2]=='B')||(b[2]=='B'&&d[2]=='A')) ans+='1';
	else if((b[2]=='B'&&d[2]=='C')||(b[2]=='C'&&d[2]=='B')) ans+='1';
	else{cout<<"1110";return 0;}
	cout<<ans;
	return 0;
}
