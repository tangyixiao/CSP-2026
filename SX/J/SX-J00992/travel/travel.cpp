#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c) cout<<1;
	else{
		cout<<"0000";
		return 0;
	}
	if(b[0]==d[0]&&b[1]==d[1]) cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	bool f=0;
	if('A'<=d[2]&&d[2]<='C'&&'A'<=b[2]&&b[2]<='C') f=1;
	if('D'<=d[2]&&d[2]<='F'&&'D'<=b[2]&&b[2]<='F') f=1;
	if(f==1) cout<<1;
	else{
		cout<<"00";
		return 0;
	}
	if(abs(d[2]-b[2])==1) cout<<1;
	else cout<<0;
	return 0;
}