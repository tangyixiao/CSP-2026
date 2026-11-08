#include<bits/stdc++.h>
using namespace std;
char rr[10],xx[10],r[10],x[10];
int rrr,xxx;
int main(){
	freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>r>>rr>>x>>xx;
    if(rr[2]>='D'){
    	rrr=1;
	}else{
		rrr=0;
	}
if(xx[2]>='D'){
    	xxx=1;
	}else{
		xxx=0;
	}
	if(r[0]==x[0]&&r[1]==x[1]){
		cout<<"1";
    	if(rr[0]==xx[0]&&rr[1]==xx[1]){
    		cout<<"1";
    		if(rrr==xxx){
    			cout<<"1";
    			if((rr[2]+1==xx[2]||rr[2]-1==xx[2])||(rr[2]=='D'&&xx[2]=='F')){
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
}
