#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int a,b,c,d;char x,y;
	cin>>a>>b>>x>>c>>d>>y;
	if(a==c) cout<<1;
	else cout<<0;
	if(a==c&&b==d) cout<<1;
	else cout<<0;
	bool f=((a==c&&b==d)&&(('A'<=x&&x<='C'&&'A'<=y&&y<='C')||(x=='D'&&y=='F')||(x=='F'&&y=='D')));
	if(f) cout<<1;
	else cout<<0;
	bool g=(f&&(!((x=='A'&&y=='C')||(x=='C'&&y=='A'))));
	if(g) cout<<1;
	else cout<<0;
	return 0;
} 