#include<bits/stdc++.h>
using namespace std;
int xa,ya;
char xb[10],yb[10];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>xa;
	for(int i=1;i<=3;i++){
		cin>>xb[i];
	}
	cin>>ya;
	for(int i=1;i<=3;i++){
		cin>>yb[i];
	}

	if(xa==ya){
		if(xb[1]==yb[1]){
			if(xb[2]==yb[2]){
				if(xb[3]=='C'&&yb[3]=='D'){
					cout<<"1100";
				}
				else if(xb[3]=='D'&&yb[3]=='C'){
					cout<<"1100";
				}
				else{
					if(xb[3]-0==yb[3]-0-1||xb[3]-0==yb[3]-0+1){
						cout<<"1111";
					}
					else{
						cout<<"1110";
					}
				}
			}
			else{
				cout<<"1000";
			}
		}
		else{
			cout<<"1000";
		}
	}
	else{
		cout<<"0000";
	}
	return 0;
}