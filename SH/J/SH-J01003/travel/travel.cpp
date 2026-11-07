#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string rc,rs,xc,xs;
	cin>>rc>>rs>>xc>>xs;
	if(rc==xc){
		cout<<"1";
		if(rs[0]==xs[0]&&rs[1]==xs[1]){
			cout<<"1";
			int a=rs[2]-65,b=xs[2]-65;
			if(a>=3&&b>=3){
				cout<<"11";
			}
			else if(a<=2&&b<=2){
				cout<<"1";
				if(abs(a-b)==1){
					cout<<"1";
				}
				else{
					cout<<"0";
				}
			}
			else{
				cout<<"00";
			}
		}
		else{
			cout<<"000";
		}
	}
	else{
		cout<<"0000";
	}
	return 0;
}
