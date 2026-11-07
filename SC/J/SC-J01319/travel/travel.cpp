#include<bits/stdc++.h>
using namespace std;

int main(){
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	int cx1,cx2;
	string zw1,zw2;
	cin>>cx1>>zw1;
	cin>>cx2>>zw2;
	
	int p1,p2;
	p1=(zw1[0]-'0')*10+(zw1[1]-'0');
	p2=(zw2[0]-'0')*10+(zw2[1]-'0');
	
	int l1=(zw1[2]>='D'?1:0);
	int l2=(zw2[2]>='D'?1:0);
	
	if(cx1!=cx2){
		cout<<"0000";
	}else if(p1!=p2){
		cout<<"1000";
	}else if(l1!=l2){
		cout<<"1100";
	}else if(l1==l2){
		if(zw1[2]==zw2[2]-1||zw1[2]==zw2[2]+1||zw1[2]=='D'||zw1[2]=='F'){
			cout<<"1111";
		}else{
			cout<<"1110";
		}
	}
	
	return 0;
} 