#include<bits/stdc++.h>
using namespace std;
string cr,sr,cx,sx;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>cr>>sr>>cx>>sx;
	if(cr!=cx){
		cout<<"0000";
	}
	else{
		cout<<"1";
		if(sr[0]!=sx[0]||sr[1]!=sx[1]){
			cout<<"000";
		}
		else{
			cout<<"1";
			if(!((sr[2]<='C'&&sx[2]<='C')||(sr[2]>'C'&&sx[2]>'C'))){
				cout<<"00";
			}
			else{
				cout<<"1";
				if(abs(sr[2]-sx[2])!=1){
					cout<<"0";
				}
				else{
					cout<<"1";
				}
			}
		}
	}
	return 0;
}
