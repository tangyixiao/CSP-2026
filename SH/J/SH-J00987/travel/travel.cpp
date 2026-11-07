#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c) cout<<"1";
	else {
		cout<<"0000";
		return 0;
	}
	if(d[0]==b[0] and d[1]==b[1]) cout<<"1";
	else {
		cout<<"000";
		return 0;
	}
	if(b[2]<='C' and d[2]>='D' or b[2]>='D' and d[2]<='C') {
		cout<<"00";
		return 0;
	}
	else cout<<"1";
	if(b[2]-d[2]==1 or d[2]-b[2]==1) {
		cout<<"1";
	}
	else {
		cout<<"0";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
