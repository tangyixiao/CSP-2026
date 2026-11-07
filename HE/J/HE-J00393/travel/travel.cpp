//travel旅游
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string cx,cy,sx,sy;
int ax,ay;//车厢号 
int bx,by;//座位排号 
char dx,dy;//座位座号 
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>cx>>sx>>cy>>sy;
	for(int i=1;i<=2;++i){
		ax=ax*10+(cx[i-1]-'0');
		ay=ay*10+(cy[i-1]-'0');
		bx=bx*10+(sx[i-1]-'0');
		by=by*10+(sy[i-1]-'0');
	}
	dx=sx[2],dy=sy[2];
	if(ax==ay){//同一节车厢 
		cout<<1;
		if(bx==by){//同一排 
			cout<<1;
			if((dx=='D'||dx=='F')&&(dy=='D'||dy=='F')){
				cout<<11;
				return 0;
			}
			else if((dx>='A'&&dx<='C')&&(dy>='A'&&dy<='C')){
				cout<<1;
				if(dx=='B'||dy=='B'){
					cout<<1;
					return 0;
				}
				else{
					cout<<0;
					return 0;
				}
			}
			else{
				cout<<0<<0;
				return 0;
			}
		}
		else{
			cout<<0<<0<<0;
			return 0;
		}
	}
	else{
		cout<<0<<0<<0<<0;
		return 0; 
	}
	return 0;
}
