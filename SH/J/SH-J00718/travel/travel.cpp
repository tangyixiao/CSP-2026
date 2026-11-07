#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int rc,xc;
	string rs,xs;
	cin>>rc>>rs>>xc>>xs;
	int res1=0,res2=0,res3=0,res4=0;
	if(rc==xc){
		res1=1;
		if(rs[0]+rs[1]==xs[0]+xs[1]){
			res2=1;
			if(rs[2]=='F'||rs[2]=='D'){
				if(xs[2]=='D'||xs[2]=='F'){
					res3=1;
					res4=1;
				}
			}
			if(rs[2]=='A'||rs[2]=='B'||rs[2]=='C'){
				if(xs[2]=='A'||xs[2]=='B'||xs[2]=='C'){
					res3=1;
					if(rs[2]=='A'||rs[2]=='B'){
						if(xs[2]=='A'||xs[2]=='B'){
							res4=1;
						}
					}if(rs[2]=='C'||rs[2]=='B'){
						if(xs[2]=='C'||xs[2]=='B'){
							res4=1;
						}
					}
				}
			}
		}
	}
	
	if(res1==1){
		cout<<1;
	}else{
		cout<<0;
	}
	if(res2==1){
		cout<<1;
	}else{
		cout<<0;
	}
	if(res3==1){
		cout<<1;
	}else{
		cout<<0;
	}
	if(res4==1){
		cout<<1;
	}else{
		cout<<0;
	}
}
