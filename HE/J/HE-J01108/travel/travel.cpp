#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	feopen("travel.out","w",stdout);
	string r1,r2,x1,x2;
	cin>>r1;
	cin>>r2;
	cin>>x1;
	cin>>x2;
	if(r1==x1){
		cout<<"1";
	}
	else{
		cout<<"0000";
		return 0;
	}
	if(r2[0]==x2[0] && r2[1] == x2[1]){
		cout<<"1";
	}
	else{
		cout<<"000";
		return 0;
	}
	if((r2[2]=='D'&&x2[2]!='F')||(r2[2]=='F'&&x2[2]!='D')){
		cout<<"00";
		return 0;
	}
	else if((r2[2]!='D'&&x2[2]=='F')||(r2[2]!='F'&&x2[2]=='D')){
		cout<<"00";
		return 0;
	}
	else{
		cout<<"1";
	}
	if(r2[2]-x2[2]==1||x2[2]-r2[2]==1){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	return 0;
} 
