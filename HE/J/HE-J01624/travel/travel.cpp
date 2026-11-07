#include<bits/stdc++.h>
using namespace std;
string cr_,sr_,cx_,sx_;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin>>cr_>>sr_>>cx_>>sx_;
	if(cr_==cx_){
		cout<<"1";
		if((sr_[0]==sx_[0])&&(sr_[1]==sx_[1])){
			cout<<"1";
			if((sr_[2]=='D'||sr_[2]=='F')&&(sx_[2]=='D'||sx_[2]=='F')){
				cout<<"11";
				return 0;
			}
			else if((sr_[2]=='A'||sr_[2]=='B'||sr_[2]=='C')&&(sx_[2]=='A'||sx_[2]=='B'||sx_[2]=='C')){
				cout<<"1";
				if((sr_[2]+1==sx_[2])||(sx_[2]+1==sr_[2])){
					cout<<"1";
					return 0;
				}
				else{
					cout<<"0";
					return 0;
				}
			}
			else{
				cout<<"00";
				return 0;
			}
		}
		else{
			cout<<"000";
			return 0;
		}
	}
	else{
		cout<<"0000";
		return 0;
	}
	
	return 0;
}
