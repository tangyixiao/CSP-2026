#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string r1,r2,x1,x2;
	bool y=true;
	cin>>r1>>r2>>x1>>x2;
	if(r1==x1){
		cout<<'1';
	}
	else{
		cout<<"0000";
		return 0;
	}
	if(r2[0]==x2[0]&&r2[1]==x2[1]){
		cout<<'1';
	}
	else{
		cout<<"000";
		return 0;
	}
	if('D'-r2[2]>0&&'D'-x2[2]>0){
		cout<<'1';
	}
	else{
		if('D'-r2[2]<=0&&'D'-x2[2]<=0){
			cout<<'1';
			y=false;
		}
		else{
			cout<<"00";
			return 0;
		}
	}
	if(!y){
		cout<<'1';
	}
	else{
		if(r2[2]-x2[2]==1||r2[2]-x2[2]==-1){
			cout<<'1';
		}
		else{
			cout<<'0';
		}
	}
	return 0;
}
