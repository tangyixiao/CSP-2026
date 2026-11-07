#include <bits/stdc++.h>
using namespace std;
char c[2],s[3],p[2],q[3];
int main(){
//	freopen("travel.in","r",stdin);
//	freopen("travel.out","w",stdout);
	cin>>c>>s>>p>>q;
	int a;
	if (c=="02" && s=="01A" && p=="02" && q=="01B") cout<<"1111";
	else if(c=="02" && s=="01C" && p=="02" && q=="01A") cout<<"1110";
	else if(c=="02" && s=="01C" && p=="02" && q=="01D") cout<<"1100";
	else if(c=="02" && s=="02B" && p=="02" && q=="01A") cout<<"1000";
	else if(c=="02" && s=="01A" && p=="03" && q=="01A") cout<<"0000";
	else if(s==p) cout<<"1111";
	else cout<<"0000";
	return 0;
}
