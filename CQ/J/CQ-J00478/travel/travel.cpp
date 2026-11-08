#include<bits/stdc++.h>
using namespace std;
#define int long long
namespace Quirrel{
//input
string a,b,c,d;
signed main(){
	cin>>a>>b>>c>>d;
	if(a!=c){
		cout<<"0000";return 0; 
	}
	cout<<1;
	if(!(b[0]==d[0]&&b[1]==d[1])){
		cout<<"000";return 0;
	}
	cout<<1;
	if((b[2]<='C'&&d[2]>='D')||(b[2]>='D'&&d[2]<='C')){
		cout<<"00";return 0;
	}
	cout<<1;
	if(b[2]=='B'||b[2]=='D'||b[2]=='F'){
		cout<<1;return 0;
	}
	if(d[2]=='B')cout<<1;
	else cout<<0;
	return 0;
}
//
}
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	Quirrel::main();
    return 0;
}
/*
去年没有拿证书
今年还是拿一下吧

按照题意模拟即可

To live an age,yet remember so little.
Perhaps I should be thankful?
All tragedy erased.I see only wonders. 
*/
