#include <iostream>
using namespace std;
int main(){
	freeopen("travel.in","r",stdin);
	freeopen("travel.out","w",stdout);
	string ro,rt,xo,xt;
	long long a,b,c,d;
	cin>>ro>>rt>>xo>>xt;
	if(ro==xo){
		cout<<"1";
		if(rt[0]==xt[0]&&rt[1]==xt[1]){
			cout<<"1";
			if(rt[2]<='C'&&xt[2]<='C'){
				cout<<"1";
				if(rt[2]+1==xt[2]||rt[2]==xt[2]+1){
					cout<<"1";
				}
				else{
					cout<<"0";
				}
				
			}
			else if(rt[2]>'C'&&xt[2]>'C'){
				cout<<"1";
			}
			else{
				cout<<"00";
			}
		}
		else{
			cout<<"000";
		}
	}	
	else{
		cout<<"0000";
	}	
}
