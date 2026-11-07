#include<bits/stdc++.h>
#define str string
using namespace std;
int main() {
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	str x,y;
	cin>>a>>x>>b>>y;
	if(a==b) cout<<1; else cout<<0;
	if(a==b&&x[0]==y[0]&&x[1]==y[1]) cout<<1;else cout<<0;
	if(a==b&&x[0]==y[0]&&x[1]==y[1]&&(x[2]<='C'&&y[2]<='C'||x[2]>'C'&&y[2]>'C')) cout<<1;else cout<<0;
	if(a==b&&x[0]==y[0]&&x[1]==y[1]&&(x[2]<='C'&&y[2]<='C'||x[2]>'C'&&y[2]>'C')&&abs(x[2]-y[2])==1) cout<<1;else cout<<0;
	
}