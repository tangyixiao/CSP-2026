#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string co,so,ct,st;
    cin>>co>>so>>ct>>st;
    if(co==ct){
    	cout<<"1";
    	if(so[0]==st[0]&&so[1]==st[1]){
			cout<<"1";
			if((so[2]<='C'&&st[2]<='C')||(so[2]>='D'&&st[2]>='D')){
				cout<<"1";
				if((so[2]=='D'&&st[2]=='F')||(so[2]=='F'&&st[2]=='D')){
					cout<<"1";
				}else if((so[2]+1==st[2]||so[2]-1==st[2])&&(so[2]!='E'&&st[2]!='E')){
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
