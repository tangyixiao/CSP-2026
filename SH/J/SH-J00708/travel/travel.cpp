#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
	freopen("travel.in","r",stdin);
	freopen ("travel.out","w",stdout);
	int a,b,c,d;
	char e,f;
	cin>>a>>c>>e>>b>>d>>f;
	if(a==b){cout<<1;
	if(c==d){cout<<1;
	if(e>='A'&&e<='C'&&f>='A'&&f<='C'||e>='D'&&e<='F'&&f>='D'&&f<='F')cout<<1;
	else cout<<0;
	if(e=='C'&&f=='D'||e=='D'&&f=='C')cout<<0;
	else if(int(e)==int(f)-1||int(e)==int(f)+1)cout<<1;
	else cout<<0;
}
	else{
		cout<<"000";
	}
}
else cout<<"0000";
	return 0;
}
