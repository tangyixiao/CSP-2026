#include<bits/stdc++.h>
using namespace std;
string rc,xc,rz,xz;
int a=0;
int main(){
	freopen("travel.in","r",stdin);
  	freopen("travel.out","w",stdout);
	cin >> rc >> rz >> xc >> xz;
	if(rc==xc) {
		cout<<1;
		a++;
		if(rz[0]==xz[0]&&rz[1]==xz[1]) {
			cout<<1;
			a++;
			if((rz[2]-'A'>2&&xz[2]-'A'>2)||
			(rz[2]-'A'<3&&xz[2]-'A'<3)){
				cout<<1;
				a++;
				if((rz[2]-'A'==xz[2]-'A'+1)||
				(rz[2]-'A'==xz[2]-'A'-1)){
					cout<<1;
					a++;
				}
			}
		}
	}
	for(int i=1;i<=4-a;i++){
		cout<<0;
	}
	return 0;
}