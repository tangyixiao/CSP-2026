#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string rc,rz,xc,xz;
	bool cx,p,l,xl;
	cx=p=l=xl=true;
	cin>>rc>>rz>>xc>>xz;
	if (rc!=xc){
		cx=p=l=xl=0;
		cout<<cx<<p<<l<<xl;
		return 0;
	}
	if(rz[0]!=xz[0] || rz[1]!=xz[1]){
		p=0;
	}
	if(p==0) l=0;
	else{
		if(rz[2]=='A'||rz[2]=='B'||rz[2]=='C'){
		if(xz[2]!='F' && xz[2]!='D') l=1;
		else l=0;
		}
		else if(rz[2]=='D'||rz[2]=='F'){
			if(xz[2]=='D' || xz[2]=='F') l=1;
			else l=0;
		}
	}
	if(p!=1 || l!=1){
		xl=0;
		cout<<cx<<p<<l<<xl;
		return 0;
	}
	if(p==1 && l==1 && rz[2]=='A' && xz[2]=='B') xl=1;
	else if(p==1 && l==1 && rz[2]=='B' && xz[2]=='A' || xz[2]=='C') xl=1;
	else if(p==1 && l==1 && rz[2]=='C' && xz[2]=='B') xl=1;
	else if(p==1 && l==1 && rz[2]=='F' && xz[2]=='D') xl=1;
	else if(p==1 && l==1 && rz[2]=='D' && xz[2]=='F') xl=1;
	else xl=0;
	cout<<cx<<p<<l<<xl;
	return 0;
} 
