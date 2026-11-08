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
		int r=0;
		if(sr[0]>0) r=sr[0]-'0';
		r=r*10+sr[1]-'0';
		int x=0;
		if(sx[0]>0) x=sx[0]-'0';
		x=x*10+sx[1]-'0';
		if(r!=x){
			cout<<"1000";
		}
		else{
			int zr=sr[2]-64,zx=sx[2]-64;
			if(zr>zx) swap(zr,zx);
			if(zr>3&&zx>3)
				cout<<"1111";
			else if(zr<=3&&zx>3)
				cout<<"1100";
			else{
				if(zx-zr==1) cout<<"1111";
				else cout<<"1110";
			}
		}
	}
	return 0;
}
