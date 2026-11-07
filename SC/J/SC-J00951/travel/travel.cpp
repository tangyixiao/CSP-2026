#include<bits/stdc++.h>
using namespace std;
int c,c_;
int set_x,set_y;
int set__x,set__y;
string s,s_;
int ans[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c>>s>>c_>>s_;
	if(c==c_){
		ans[0]=1;
	}
	else{
		cout<<ans[0]<<ans[1]<<ans[2]<<ans[3];
		return 0;
	}
	set_x=(s[0]-'A')*10+s[1]-'A';
	set__x=(s_[0]-'A')*10+s_[1]-'A';
	set_y=s[2]-'A';
	set__y=s_[2]-'A';
    if(set_x==set__x){
		ans[1]=1;
	}
	else{
		cout<<ans[0]<<ans[1]<<ans[2]<<ans[3];
		return 0;
	}
	if((set_y<=2&&set__y<=2)||(set_y>=3&&set__y>=3)){
		ans[2]=1;
	}
	else{
		cout<<ans[0]<<ans[1]<<ans[2]<<ans[3];
		return 0;
	}
    if(abs(set__y-set_y)==1){
		ans[3]=1;
	}
	cout<<ans[0]<<ans[1]<<ans[2]<<ans[3];
	return 0;
}