#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	cin>>a>>b>>c>>d;
	freopen("travel.out","w",stdout);
	if(a!=c)cout<<0<<0<<0<<0;
	else if(b[0]!=d[0]||b[1]!=d[1])cout<<1<<0<<0<<0;
	else if(abs(b[2]-d[2])==1&&!(b[2]=='C'&&d[2]=='D'||d[2]=='C'&&b[2]=='D'))cout<<1<<1<<1<<1;
	else cout<<1<<1<<1<<0;
	return 0;
}
