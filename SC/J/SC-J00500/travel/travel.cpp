#include<bits/stdc++.h>
#define ll long long
using namespace std;
string n,m;
string sr,sx;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>n>>sr>>m>>sx;
	if(n==m){
		cout<<"1";
		if(sr[0]==sx[0]&&sr[1]==sx[1]){
			cout<<"1";
			if((sr[2]>='A'&&sr[2]<='C'&&sx[2]>='A'&&sx[2]<='C')||(sr[2]>='D'&&sr[2]<='F'&&sx[2]>='D'&&sx[2]<='F')){
				cout<<"1";
				if((sr[2]+1==sx[2]||sx[2]+1==sr[2])||(sr[2]=='D'&sx[2]=='F')||(sx[2]=='D'&sr[2]=='F')){
					cout<<"1";
				}else{
					cout<<"0";
				}
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	
	
	
	return 0;
} 