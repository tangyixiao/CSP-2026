#include <bits/stdc++.h>
#define ll long long
using namespace std;
//priority_queue<ll> pq;
//priority_queue<ll,vector<ll>,greater<ll> > pq; //Ð¡¸ù¶Ñ
const int N=1e5,MOD=9;
string rch,xch,rs,xs;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>rch>>rs>>xch>>xs;
	if(rch==xch)
		cout<<"1";
	else
	{cout<<"0000";return 0;}
	
	if(rs.substr(0,2)==xs.substr(0,2))
		cout<<"1";
	else
	{cout<<"000";return 0;}
	
	if(rs[2]=='D'&&xs[2]=='F')
		{cout<<"11";return 0;}
	else if(rs[2]=='F'&&xs[2]=='D')
		{cout<<"11";return 0;}

	else if(rs[2]=='A'&&xs[2]=='B')
		{cout<<"11";return 0;}
	else if(rs[2]=='B'&&xs[2]=='A')
		{cout<<"11";return 0;}

	else if(rs[2]=='B'&&xs[2]=='C')
		{cout<<"11";return 0;}
	else if(rs[2]=='C'&&xs[2]=='B')
		{cout<<"11";return 0;}


	else if(rs[2]=='A'&&xs[2]=='C')
		{cout<<"10";return 0;}
	else if(rs[2]=='C'&&xs[2]=='A')
		{cout<<"10";return 0;}
	else cout<<"00";
	return 0;
}