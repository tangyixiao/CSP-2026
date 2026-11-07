#include <bits/stdc++.h>
using namespace std;
string cr,sr,cx,sx;

int r,x;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>cr>>sr>>cx>>sx;
	int r=0,x=0;
	for(int i=0;i<2;i++){
		int a=cr[i]-'0';
		r=r*10+a;
	}
	for(int i=0;i<2;i++){
		int a=cx[i]-'0';
		x=x*10+a;
	}
	if(r==x) {
		cout <<1;
		r=0;
		x=0;
		for(int i=0;i<2;i++){
			int a=sr[i]-'0';
			r=r*10+a;
		}
		for(int i=0;i<2;i++){
			int a=sx[i]-'0';
			x=x*10+a;
		}
		if(r==x){
			cout <<1;
			r=sr[2];
			x=sx[2];
			
			if((r<=67&&x<=67)||(x+r==137)){
				
				cout <<1;
				if((r==65&&x==67)||(r==67&&x==65)){
					cout <<0;
				}
				else{
					cout <<1;
				}
			}
			else {
			
				cout <<"00";
			}
		}
		else{
			cout <<"000";
		}
	}
	else{
		cout <<"0000";
	}
	
	return 0;
}
