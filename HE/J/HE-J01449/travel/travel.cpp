#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2,c3,c4;
	char a,b;
	cin>>c1>>c2>>a>>c3>>c4>>b;
	if(c1==c3){
		cout<<"1";
		if(c2==c4){
			cout<<"1";
			if(((a=='A'||a=='B'||a=='C')&&(b=='A'||b=='B'||b=='C')) || ((a=='D'||a=='F')&&(b=='D'||b=='F'))){
				cout<<"1";
				if(a=='A'||a=='B'||a=='C'){
					if(a+1==b || b+1==a){
						cout<<"1";
					}
					else{
						cout<<"0";
					}
				}
				else if(a=='D'||a=='F'){
					if(a+2==b || b+2==a){
						cout<<"1";
					}
					else{
						cout<<"0";
					}
				}
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






	return 0;
}
