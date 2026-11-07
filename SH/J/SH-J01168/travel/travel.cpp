#include<bits/stdc++.h>
using namespace std;
string rc,rs,xc,xs;
bool a,b,c,d;
bool check()
{
	if(rs[2]=='A' && (xs[2]=='B' || xs[2]=='C')) return true;
	if(rs[2]=='B' && (xs[2]=='A' || xs[2]=='C')) return true;
	if(rs[2]=='C' && (xs[2]=='A' || xs[2]=='B')) return true;
	if(rs[2]=='D' && xs[2]=='F') return true;
	if(rs[2]=='F' && xs[2]=='D') return true;
	return false;
}
bool nxt()
{
	if(rs[2]=='A' && xs[2]=='B') return true;
	if(rs[2]=='B' && (xs[2]=='A' || xs[2]=='C')) return true;
	if(rs[2]=='C' && xs[2]=='B') return true;
	if(rs[2]=='D' && xs[2]=='F') return true;
	if(rs[2]=='F' && xs[2]=='D') return true;
	return false;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>rc>>rs>>xc>>xs;
	if(rc==xc) a=true;
	else a=false;
	if(a && rs[0]==xs[0] && rs[1]==xs[1]) b=true;
	else b=false;
	if(b && check()) c=true;
	else c=false;
	if(c && nxt()) d=true;
	else d=false;
	cout<<a<<b<<c<<d;
	return 0;
}
