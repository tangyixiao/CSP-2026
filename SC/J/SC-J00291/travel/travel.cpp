#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int r,x;
	string R,X;
	cin>>r>>R>>x>>X;
	if(r==x){
		cout<<"1";
		if(R[1]==X[1]&&R[0]==X[0]){
			cout<<"1";
			if(R[2]>='D'&&X[2]>='D'){
				cout<<"11";
			}else if(R[2]<'D'&&X[2]<'D'){
				cout<<"1";
				if(R[2]-X[2]>=-1&&R[2]-X[2]<=1){
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
	fclose(stdin);
	fclose(stdout);
	return 0;
}