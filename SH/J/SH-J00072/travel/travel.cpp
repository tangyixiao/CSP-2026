#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	string cx,cy,sx,sy;
	cin>>cx>>sx>>cy>>sy;
	if(cx==cy){
		cout<<1;
		string rowx=sx.substr(0,2);
		string rowy=sy.substr(0,2);
		//cout<<endl;
		//cout<<rowx<<" "<<rowy<<endl;
		if(rowx==rowy){
			cout<<1;
			char numx=sx[2];
			char numy=sy[2];
			if(numx=='A'||numx=='B'||numx=='C'){
				if(numy=='A'||numy=='B'||numy=='C'){
					cout<<1;
					if(numx=='B'||numy=='B'){
						cout<<1;
					}else{
						cout<<0;
					}
				}else{
					cout<<"00";
				}
			}else{
				if(numy=='D'||numy=='F'){
					cout<<"11";
				}else{
					cout<<"00";
				}
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	return 0; 
} 
