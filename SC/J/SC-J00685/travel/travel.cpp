#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b,c,d;
	char e,f;
	cin>>a>>b>>e>>c>>d>>f;
	if(a!=c) cout<<"0000";
	else if(b!=d) cout<<"1000";
	else if((e<='C'&&f>'C')||(e>'C'&&f<='C')) cout<<"1100";
	else if(abs(e-f)!=1) cout<<"1110";
	else cout<<"1111";
	return 0;
} 