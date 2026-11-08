#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string rc,rs,xc,xs;
	cin>>rc>>rs>>xc>>xs;
	if(rc[0]==xc[0]&&rc[1]==xc[1]){
		cout<<"1";
		if(rs[0]==xs[0]&&rs[1]==xs[1]){
			cout<<"1";
			if(rs[2]>='D'&&xs[2]>='D'||rs[2]<='C'&&xs[2]<='C'){
				cout<<"1";
				if(rs[2]>='D'&&xs[2]>='D'){
					cout<<"1";
				}
				else if((max(rs[2]-'A',xs[2]-'A')-min(rs[2]-'A',xs[2]-'A'))==1){
					cout<<"1";
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
