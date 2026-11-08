#include<bits/stdc++.h>
#define int long long
using namespace std; 
int cr,cx;
string r,x;
int ch(char c){
	if(c>='A'&&c<='C') return 0;
	else return 1;
}
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0);
	cin>>cr>>r>>cx>>x;
	cout<<(cr==cx);
	cout<<((cr==cx)&&(r[0]==x[0]&&r[1]==x[1]));
	cout<<((cr==cx)&&(r[0]==x[0]&&r[1]==x[1])&&(ch(r[2])==ch(x[2])));
	cout<<((cr==cx)&&(r[0]==x[0]&&r[1]==x[1])&&(ch(r[2])==ch(x[2]))&&(abs(r[2]-x[2])==1)&&!((r[2]=='C'&&x[2]=='D')||(x[2]=='C'&&r[2]=='D')));
	return 0;
}
