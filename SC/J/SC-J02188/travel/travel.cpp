#include<bits/stdc++.h>
using namespace std;
string x_ca,x_se,r_ca,r_se;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>r_ca>>r_se>>x_ca>>x_se;
	bool f=0;
	if(r_ca==x_ca){
		cout<<1;
		f=1;
	}
	else cout<<0;
	
	if(f==1 && r_se[0]==x_se[0] && r_se[1]==x_se[1]){
		cout<<1;
		f=1;
	}
	else{
		cout<<0;
		f=0;
	}
	
	if(f==1){
		char x=r_se[2],y=x_se[2];
		if((x=='A' || x=='B' || x=='C') && (y=='A' || y=='B' || y=='C')){
			cout<<1;
			f=1;
		}
		else if((x=='D' || x=='F') && (y=='D' || y=='F')){
			cout<<1;
			f=1;
		}
		else{
			cout<<0;
			f=0;
		}
	}
	else{
		cout<<0;
		f=0;
	}
	
	if(f==1){
		if(abs(int(r_se[2])-int(x_se[2]))==1){
			cout<<1;
		}
		else cout<<0;
	}
	else cout<<0;
	return 0;
} 