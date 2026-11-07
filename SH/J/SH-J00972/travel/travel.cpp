#include<bits/stdc++.h>
using namespace std;
string c,s,c2,s2;
bool op=1;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c>>s>>c2>>s2;
	if(c==c2) cout<<1;
	else{
		op=0;
		cout<<0;
	}
	if(s[0]==s2[0]&&s[1]==s2[1]&&op) cout<<1;
	else{
		op=0;
		cout<<0;
	}
	if(op&&((s[2]<='C'&&s2[2]<='C')||(s[2]>='D'&&s2[2]>='D'))) cout<<1;
	else{
		op=0;
		cout<<0;
	}
	if(op&&abs((int)s[2]-(int)s2[2])==1) cout<<1;
	else cout<<0;
	return 0;
	
}
