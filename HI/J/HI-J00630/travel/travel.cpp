#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int cx1,cx2,ye1,ye2;
	char R__,X__;
	cin>>cx1>>ye1>>R__>>cx2>>ye2>>X__;
	if(cx1!=cx2){
		cout<<"0000";
	}else{
		if(ye1!=ye2){
			cout<<"1000";
		}else{
			if((R__<='C'&&X__>'C')||(R__>'C'&&X__<='C')){
				cout<<"1100";
			}else{
				if((R__=='C'&&X__=='A')||(X__=='C'&&R__=='A')){
					cout<<"1110";
				}else{
					cout<<"1111";
				}
			}
		}
	}
	return 0;
} 
