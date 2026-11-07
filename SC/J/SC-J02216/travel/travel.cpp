#include<bits/stdc++.h>
using namespace std;
const int N=1e6+5;
string c1,c2,c3,c4;
char a,b,c;
signed main(){
	cin.tie(0)->sync_with_stdio(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>c2>>c3>>c4;
	a=c2[2],b=c4[2];
	if(c1==c3){
		cout<<1;
		if(c2[0]==c4[0]&&c2[1]==c4[1]){
			cout<<1;
			if((a>='D'&&b>='D')||(a<'D'&&b<'D')){
				cout<<1;
				if(abs(int(a-b))==1&&!((a=='C'&&b=='D')||(a=='D'&&b=='C')))cout<<1;
				else cout<<0;
			}else cout<<"00";
		}
		else cout<<"000";
	}else cout<<"0000";
	return 0;
}