#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int ax,bx;
	string ay,by;
	cin>>ax>>ay>>bx>>by;
	if(ax!=bx){
		cout<<"0000";
		return 0;
	}
	else{
		cout<<1;
		if(ay[0]==by[0] && ay[1]==by[1]){
			cout<<1;
			if(ay[2]=='A'){
				if(by[2]=='B'){
					cout<<"11";
				}
				else if(by[2]=='C'){
					cout<<"10";
				}
				else cout<<"00";
			}
			else if(ay[2]=='B'){
				if(by[2]=='A'){
					cout<<"11";
				}
				else if(by[2]=='C'){
					cout<<"11";
				}
				else cout<<"00";
			}
			else if(ay[2]=='C'){
				if(by[2]=='B'){
					cout<<"11";
				}
				else if(by[2]=='A'){
					cout<<"10";
				}
				else cout<<"00";
			}
			else if(ay[2]=='D'){
				if(by[2]=='F'){
					cout<<"11";
				}
				else cout<<"00";
			}
			else{
				if(by[2]=='D'){
					cout<<"11";
				}
				else cout<<"00";
			}
		}
		else cout<<"000";
	}
	return 0;
}
