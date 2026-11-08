#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string cx,sx,cy,sy;
	cin>>cx>>sx>>cy>>sy;
	if(cx[0]==cy[0] && cx[1]==cy[1]){
		cout<<1;
	}else{
		cout<<0;
		
	}
	if(cx[0]==cy[0] && cx[1]==cy[1] && sx[0]==sy[0] && sx[1]==sy[1]){
		cout<<1;
	}else{
		cout<<0;
		
	}
	if(cx[0]==cy[0] && cx[1]==cy[1] && sx[0]==sy[0] && sx[1]==sy[1] && ((sx[2]=='A' || sx[2]=='B' || sx[2]=='C') && (sy[2]=='A' || sy[2]=='B' || sy[2]=='C')) || ((sx[2]=='D' || sx[2]=='F') && (sy[2]=='D' || sy[2]=='F'))){
		cout<<1;	
	}else{
		cout<<0;
		
	}
	
	if(cx[0]==cy[0] && cx[1]==cy[1] && sx[0]==sy[0] && sx[1]==sy[1] && ((sx[2]=='A' || sx[2]=='B') && (sy[2]=='A' || sy[2]=='B')) || ((sx[2]=='B' || sx[2]=='C') && (sy[2]=='B' || sy[2]=='C')) || ((sx[2]=='D' || sx[2]=='F') && (sy[2]=='D' || sy[2]=='F'))){
		cout<<1;
	}else{
		cout<<0;
		
	}
	return 0;
}
