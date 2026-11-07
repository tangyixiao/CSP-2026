#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string cr,sr,cx,sx,pr,px,zr,zx;
	cin>>cr>>sr>>cx>>sx;

	for(int i=0;i<=2;i++){
		if(sr[i]>='0'&&sr[i]<='9'){
			pr+=sr[i];
		}else{
			zr+=sr[i];
		}
		if(sx[i]>='0'&&sx[i]<='9'){
			px+=sx[i];
		}else{
			zx+=sx[i];
		}
	}
	if(cr==cx){
		cout<<"1";
		if(pr==px){
		    cout<<"1";
		    if(((zr=="A"||zr=="B"||zr=="C")&&(zx=="A"||zx=="B"||zx=="C"))||((zr=="D"||zr=="F")&&(zx=="D"||zx=="F"))){
			    cout<<"1";
			    if(((zr=="A")&&(zx=="B"))||((zr=="B")&&(zx=="A"))||((zr=="B")&&(zx=="C"))||((zr=="C")&&(zx=="B"))||((zr=="D")&&(zx=="F"))||((zr=="F")&&(zx=="D"))){
			    	cout<<"1";
				}else{
					cout<<"0";
				}
		    }

		    else{
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
