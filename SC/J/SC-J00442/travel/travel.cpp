#include<bits/stdc++.h>
using namespace std;
string cr;
string sr;
string cx;
string sx;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>cr>>sr>>cx>>sx;
	if(cr[0]==cx[0]&&cr[1]==cx[1]){
		cout<<1;
		if(sr[0]==sx[0]&&sr[1]==sx[1]){
			cout<<1;
			if(sr[2]=='A'||sr[2]=='B'||sr[2]=='C'){
				if(sx[2]!='F'&&sx[2]!='D'){
					cout<<1;
				}
				else{
					cout<<0;
				}
			}
			else{
				if(sr[2]=='F'||sr[2]=='D'){
					if(sx[2]!='A'&&sx[2]!='B'&&sx[2]!='C'){
						cout<<1;
					}
					else{
						cout<<0;
					}
				}
			}			
		}
		else{
			cout<<"00";
		}
	}
	else{
		cout<<"000";
	}
	if(cr[0]==cx[0]&&cr[1]==cx[1]&&sr[0]==sx[0]&&sr[1]==sx[1]){
		if(sr[2]+1==sx[2]){
			if(sr[2]!='C'){
				cout<<1;
			}
			else{
				cout<<0;
			}
		}
		else{
			if(sx[2]+1==sr[2]){
				if(sx[2]!='C'){
					cout<<1;
				}
				else{
					cout<<0;
				}
			}
			else{
				cout<<0;
			}
		}
	}
	else{
		cout<<0;
	}
	return 0;
}