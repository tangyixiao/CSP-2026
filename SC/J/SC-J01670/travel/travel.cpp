#include<bits/stdc++.h>
using namespace std;
int a,b,d,e;
char c,f;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d>>e>>f;
	bool t=1;
	t&=(a==d);
	cout<<t;
	t&=(b==e);
	cout<<t;
	t&=((c=='D'&&f=='F')||(c=='F'&&f=='D')||(c=='A'&&f=='B')||(c=='B'&&f=='A')||(c=='A'&&f=='C')||(c=='C'&&f=='A')||(c=='B'&&f=='C')||(c=='C'&&f=='B'));
	cout<<t;
	t&=((c==f+1)||(f==c+1));
	cout<<t;
	return 0;
}