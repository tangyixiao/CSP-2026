#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	cout<<(a==c?1:0);
	cout<<(b.substr(0,2)==d.substr(0,2)&&a==c?1:0);
	cout<<(b.substr(0,2)==d.substr(0,2)&&a==c&&((b[2]>='A'&&b[2]<='C'&&d[2]>='A'&&d[2]<='C')||((b[2]=='D'||b[2]=='F')&&(d[2]=='D'||d[2]=='F')))?1:0);
	cout<<(b.substr(0,2)==d.substr(0,2)&&a==c&&((b[2]>='A'&&b[2]<='C'&&d[2]>='A'&&d[2]<='C')||((b[2]=='D'||b[2]=='F')&&(d[2]=='D'||d[2]=='F')))&&(b[2]>='A'&&b[2]<='C'&&d[2]>='A'&&d[2]<='C'&&abs(b[2]-d[2])==1?1:0)||((b[2]=='D'&&d[2]=='F')||(b[2]=='F'&&d[2]=='D'))?1:0);
}

