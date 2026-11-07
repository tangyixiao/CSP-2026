#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	bool fl=(a==c);
	cout<<fl;
	fl=fl&&(b.substr(0,2)==d.substr(0,2));
	cout<<fl;
	fl=fl&&((b[2]<='C'&&d[2]<='C')||(b[2]>'C'&&d[2]>'C'));
	cout<<fl;
	fl=fl&&(abs(b[2]-d[2])==1);
	cout<<fl;
	return 0;
} 