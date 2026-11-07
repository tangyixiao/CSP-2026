//Trick||Treat!
#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c) cout<<1;
	else cout<<0;
	if(a==c &&b[0]==d[0] && b[1]==d[1]) cout<<1;
	else cout<<0;
	if(a==c &&b[2]>='D' && d[2]>='D' && b[0]==d[0] && b[1]==d[1]) cout<<1;
	else if(a==c &&b[2]<'D' && d[2]<'D' && b[0]==d[0] && b[1]==d[1]) cout<<1;
	else cout<<0;
	if(a==c &&b[2]>='D' && d[2]>='D' && b[0]==d[0] && b[1]==d[1]) cout<<1;
	else if(a==c &&b[2]<'D' && d[2]<'D' && b[0]==d[0] && b[1]==d[1] && abs(b[2]-d[2])==1) cout<<1;
	else cout<<0;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
