#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a1,b1,a2,b2;
	char a3,b3;
	cin>>a1>>a2>>a3>>b1>>b2>>b3;
	if(a1==b1){
		if(a2==b2){
			if( ( (a3=='A'||a3=='B'||a3=='C')&&(b3=='A'||b3=='B'||b3=='C') ) ){
				if(a3=='B'||b3=='B'){
					cout<<"1111";
				}else{
					cout<<"1110";
				}
			}else if ( (a3=='D'||a3=='F') && (b3=='D'||b3=='F') ) {
				cout<<"1111";
			}else{
				cout<<"1100";
			}
		}else{
			cout<<"1000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
}