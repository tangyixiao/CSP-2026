#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int r,x;
	char R[3]={0};
	char X[3]={0};
	
	cin>>r>>R[0]>>R[1]>>R[2];
	cin>>x>>X[0]>>X[1]>>X[2];
	
	if(R[2]=='F'){
		R[2]='E';
	}
	if(X[2]=='F'){
		X[2]='E';
	}
	if(r==x){
		cout<<1;
	}
	else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	if(R[0]==X[0]&&R[1]==X[1]){
		cout<<1;
	}
	else{
		cout<<0<<0<<0;
		return 0;
	}
	if((R[2]!='C'&&X[2]!='D')&&(R[2]!='D'&&R[2]!='C')){
		cout<<1;
	}
	else{
		cout<<0<<0;
		return 0;
	}
	
	if(R[2]-X[2]==1||R[2]-X[2]==-1){
		cout<<1;
	}
	else{
		cout<<0;
		return 0;
	}
	return 0;
} 
