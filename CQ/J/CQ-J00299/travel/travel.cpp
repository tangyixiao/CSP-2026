#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
string s,t,n,m;
int a,b,c,d;
char l,r;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>s>>m>>t;
	a=(n[0]-'0')*10+(n[1]-'0');
	b=(m[0]-'0')*10+(m[1]-'0');
	c=(s[0]-'0')*10+(s[1]-'0');
	d=(t[0]-'0')*10+(t[1]-'0');
	l=s[2];
	r=t[2];
	if(r<=l) swap(l,r);
	if(a==b) cout<<"1";
	else cout<<"0";
	if(a==b&&c==d) cout<<"1";
	else cout<<"0";
	if(a==b&&c==d&&
	((l>='A'&&l<='C'&&r>='A'&&r<='C')
	||
	(l>='D'&&l<='F'&&r>='D'&&r<='F'))) cout<<"1";
	else cout<<"0";
	if(a==b&&c==d&&
	((l=='A'&&r=='B')
	||
	(l=='B'&&r=='C')
	||
	(l=='D'&&r=='F'))) cout<<"1";
	else cout<<"0";
	return 0;
}
