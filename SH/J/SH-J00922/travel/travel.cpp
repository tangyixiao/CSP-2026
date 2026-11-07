#include <bits/stdc++.h>
using namespace std;
string rc,rz,xc,xz;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>rc>>rz>>xc>>xz;
	if(rc==xc)cout<<1;
	else cout<<0;
	if(rc==xc){
	
		if(rz[0] == xz[0]&&rz[1] == xz[1]){
			cout<<1;
			
		}else{
			cout<<0;
		}
		char r,x;
		r=rz[2];
		x=xz[2];
		if(rz[0] == xz[0]&&rz[1] == xz[1]){
		
			if(r>='D'&&x>='D'){
				cout<<"11";
			}else if(r<='C'&&x<='C'){
				cout<<'1';
				if(abs(r-x) == 1){
					cout<<'1';
				}else cout<<'0'; 
			}else cout<<"00";
		}else cout<<"00";
	}else cout<<"000";
	fclose(stdout);
	fclose(stdin);
	return 0;
} 
