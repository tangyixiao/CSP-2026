#include<bits/stdc++.h>
using namespace std;

string ri,rj,xi,xj;

int dp(string xx){
	int p=0;
	for(int dp=0;dp<2;dp++){
		p*=10;
		p+=xx[dp];
	}
	return p;
}
int dz(string xx){
	char cz=xx[2];
	return int(cz-'A'+1);
}
int pd(int rz,int xz){
	if(rz==1&&xz==2||xz==1&&rz==2){
		return 1;
	}else if(rz==2&&xz==3||xz==2&&rz==3){
		return 1;
	}else if(rz==4&&xz==5||xz==4&&rz==5){
		return 1;
	}
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>ri>>rj>>xi>>xj;
	if(ri==xi){
		cout<<"1";
//		cout<<ri<<"\n"<<rj<<"\n"<<xi<<"\n"<<xj<<"\n";
		int rp=dp(rj);
		int xp=dp(xj);
		if(rp==xp){
			cout<<"1";
			int rz=dz(rj);
			int xz=dz(xj);
			if(xz<=3&&rz<=3){
				cout<<"1"<<pd(rz,xz);
			}else if(xz>3&&xz<=5&&rz>3&&rz<=5){
				cout<<"1"<<pd(rz,xz);
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
