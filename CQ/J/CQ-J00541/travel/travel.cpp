#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie();
	cout.tie();
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a!=c) cout<<"0000";
	else if(b[0]+b[1]!=d[0]+d[1]) cout<<"1000";
	else if(!('A'<=b[2] && b[2]<='C' && 'A'<=d[2] && d[2]<='C') && !((b[2]=='D' || b[2]=='F') && (d[2]=='D' || d[2]=='F'))) cout<<"1100";
	else if((b[2]=='D' && d[2]=='F') || (b[2]=='F' && d[2]=='D') || abs(d[2]-b[2])==1) cout<<"1111";
	else cout<<"1110";
	return 0;
}
//膜拜W_B_Swift大佬！ RP++!祈祷自己不要挂分 

