#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll rc,xc,rz,xz,a;
string r,x;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>rc>>r>>xc>>x;
	rz=stoll(r);
	xz=stoll(x);
	if(rc==xc){
		cout<<1;
		a=1;
	}else{
		cout<<0;
		a==0;
	}

	if(a==0){
		cout<<0;
	}else{
		if(rz==xz){
			cout<<1;
		}else{
			cout<<0;
			a=0;
		}
	}

	if(a==0){
		cout<<0;
	}else{
		if((r[2]>=65&&r[2]<=67&&x[2]>=65&&x[2]<=67)||(r[2]>=68&&r[2]<=70&&x[2]>=68&&x[2]<=70)){
			cout<<1;
		}else{
			cout<<0;
			a=0;
		}
	}

	if(a==0){
			cout<<0;
		}else{
			if((r[2]==65&&x[2]==66)||(r[2]==66&&x[2]==67)||(r[2]==68&&x[2]==70)||(r[2]==66&&x[2]==65)||(r[2]==67&&x[2]==66)||(r[2]==70&&x[2]==68))
			cout<<1;
			else{
			cout<<0;
			}
		}
	/*
	if(rz==xz){
		if(r[2]>=65&&x[2]<=67&&x[2]>=65&&x[2]<=67){
			cout<<1;
		}else{
			cout<<0;
			}
	}else{
		cout<<0;
	}

	if(rz==xz){
		if(r[2]-x[2]+10==11||r[2]-x[2]+10==9){
			cout<<1;
		}else{
			if(r[2]-x[2]+10==12||r[2]-x[2]+10==8){
				cout<<1;
			}else{
				cout<<0;
			}
		}
	}else{
		cout<<0;
		}
	*/
	return 0;
}