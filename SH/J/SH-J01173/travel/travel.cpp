#include<bits/stdc++.h>
using namespace std;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string ax,ay,bx,by;
	cin>>ax>>ay>>bx>>by;
	if(ax==bx)cout<<1;
	else {
		cout<<"0000";
		return 0;
	}
	int x=10*(ay[0]-'0')+(ay[1]-'0');
	int y=10*(by[0]-'0')+(by[1]-'0');
	if(x==y)cout<<1;
	else {
		cout<<"000";
		return 0;
	}if(ay[2]=='A'||ay[2]=='B'||ay[2]=='C'){
		if(by[2]=='A'||by[2]=='B'||by[2]=='C'){
			if(ay[2]-by[2]==1||ay[2]-by[2]==-1){
				cout<<11;
			}else{
				cout<<10;
			}
		}else{
			cout<<"00";
		}
	}else {
		if(by[2]=='D'||by[2]=='F'){
			cout<<11;
		}else{
			cout<<"00";
		}
	}
	return 0;
}
