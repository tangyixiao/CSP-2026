#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int mp[1005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);	
	cin>>a>>b>>c>>d,mp['A']=1,mp['B']=2,mp['C']=3,mp['D']=4,mp['F']=5;
	if(a==c) cout<<1;
	else cout<<0;
	if(a==c && b[0]==d[0] && b[1]==d[1]) cout<<1;
	else cout<<0;
	if(a==c && (b[0]==d[0] && b[1]==d[1]) && (mp[b[2]]<=3 && mp[d[2]]<=3 || mp[b[2]]>=4 && mp[d[2]]>=4)) cout<<1;
	else cout<<0;
	if(a==c && (b[0]==d[0] && b[1]==d[1]) && (mp[b[2]]<=3 && mp[d[2]]<=3 || mp[b[2]]>=4 && mp[d[2]]>=4) && abs(mp[b[2]]-mp[d[2]])==1) cout<<1;
	else cout<<0;	
	return 0;
}
