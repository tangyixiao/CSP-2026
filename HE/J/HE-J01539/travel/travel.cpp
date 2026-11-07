#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	char ss1,ss2,ss3,ss4,ss5,ss6;
	cin>>c1>>ss1>>ss2>>ss3>>c2>>ss4>>ss5>>ss6;
	if(c1==c2){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	if(ss1==ss4&&ss2==ss5){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	if(ss3<68&&ss6<68||ss3>67&&ss6>67){
		cout<<1;
	}else{
		cout<<"00";
		return 0;
	}
	if(ss3==67&&ss6==68||ss3==68&&ss6==67){
		cout<<0;
		return 0;
	}else if(ss3-ss6==1||ss6-ss3==1){
		cout<<1;
		return 0;
	}else{
		cout<<0;
		return 0;
	}
}
