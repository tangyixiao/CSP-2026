#include<bits/stdc++.h>
using namespace std;
string rc,rs,xc,xs;
long long rp,xp;
char rz,xz;
int bs(long long x){
	if(x<=0){
		return -x;
	}else{
		return x;
	}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>rc>>rs>>xc>>xs;
	if(rc==xc){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	for(int i=0;i<rs.size();i++){
		if(rs[i]>='0'&&rs[i]<='9'){
			rp=rp*10+(rs[i]-'0');
		}else{
			rz=rs[i];
		}
	}
	for(int i=0;i<xs.size();i++){
		if(xs[i]>='0'&&xs[i]<='9'){
			xp=xp*10+(xs[i]-'0');
		}else{
			xz=xs[i];
		}
	}
	if(rp==xp){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	if((rz<='C'&&xz<='C')){
		cout<<1;
	}else if((rz>='D'&&xz>='D')){
		cout<<1;
	}else{
		cout<<"00";
		return 0;
	}
	if(bs((rz-'A')-(xz-'A'))==1&&((xz!='C'&&rz!='D')||(rz!='C'&&xz!='D'))){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}