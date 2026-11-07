#include<bits/stdc++.h>
using namespace std;
string b1,d1;
char b2,d2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<"1";
	}else{
		cout<<"0000";
		return 0;
	}
	b1+=b[0];
	b1+=b[1];
	b2+=b[2];
	d1+=d[0];
	d1+=d[1];
	d2+=d[2];
	if(b1==d1){
		cout<<"1";
	}else{
		cout<<"000";
		return 0;
	}
	bool left=0,right=0;
	if(b2=='D'||b2=='F')  right=1;
	else left=1;
	if(d2=='D'||d2=='F')  right=1;
	else left=1;
	if(left==1&&right==1){
		cout<<"00";
		return 0;
	}else{
		cout<<"1";
		if(abs(b2-d2)==1)  cout<<"1";
		else  cout<<"0";
	}
	return 0;
}
