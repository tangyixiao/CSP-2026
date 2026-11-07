#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define pii pair<int,int>
#define F_up(x,y,z) for(int x=y;x<=z;x++)
#define F_down(x,y,z) for(int x=y;x>=z;x--)
#define F_in(x,y) for(auto x:y)
#define W(t) while(t--)
#define WALL while(1)
using namespace std;
string cx,sx,cy,sy;
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>cx>>sx>>cy>>sy;
	if(cx==cy){
		cout<<"1";
	}else{
		cout<<"0000";
		return 0;
	}if(sx[0]==sy[0]&&sx[1]==sy[1]){
		cout<<"1";
	}else{
		cout<<"000";
		return 0;
	}if((sx[2]<='C'&&sy[2]<='C')||(sx[2]>'C'&&sy[2]>'C')){
		cout<<"1";
	}else{
		cout<<"00";
		return 0;
	}if(abs(sx[2]-sy[2])==1||(sx[2]=='F'&&sy[2]=='D')||(sx[2]=='D'&&sy[2]=='F')){
		cout<<"1";
	}else{
		cout<<"0";
	}
	return 0;
}
