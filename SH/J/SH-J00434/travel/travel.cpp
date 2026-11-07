#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int q,w,e,r,t,y=0;
	char a,b,c;
	cin>>q>>w>>a>>e>>r>>b;
	if(q==e) {
		cout<<"1";
		if(w==r){
			cout<<"1";
				if (a == 'D' and (b=='A' or b=='C' or b=='B')) {
				cout<<"00";
				y=1;
		}
				if (a == 'F' and (b=='A' or b=='C' or b=='B')) {
				cout<<"00";
				y=1;
		}
				if (b == 'D' and (a=='A' or a=='C' or a=='B')) {
				cout<<"00";
				y=1;
		}
				if (b == 'F' and (a=='A' or a=='C' or a=='B')) {
				cout<<"00";
				y=1;
		}
		if(y==0) {
			cout<<"1";
			if (abs(a-b)==1) cout<<"1";
			if (abs(a-b)>=1) cout<<"0";
		}
	}
	if(w!=r){
			cout<<"000";
		}
	}
	if (q!=e) cout<<"0000";
	return 0;
}
