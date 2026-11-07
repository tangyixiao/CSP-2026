#include<bits/stdc++.h>
using namespace std;
int cx,cy,a[5];
string sx,sy;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>cx>>sx>>cy>>sy;
	if(cx==cy){
		a[1]=1;
	}
	if(sx[0]==sy[0]&&sx[1]==sy[1]&&a[1]==1){
		a[2]=1;
	}
	if(a[2]==1){
		if(sx[2]=='A'||sx[2]=='B'||sx[2]=='C'){
			if(sy[2]=='A'||sy[2]=='B'||sy[2]=='C'){
				a[3]=1;
			}
		}
		else if(sx[2]=='D'||sx[2]=='F'){
			if(sy[2]=='D'||sy[2]=='F'){
				a[3]=1;
			}
		}
	}
	if(a[3]==1){
		if(sx[2]=='A'&&sy[2]=='B')a[4]=1;
		if(sx[2]=='B'&&sy[2]=='A')a[4]=1;
		if(sx[2]=='B'&&sy[2]=='C')a[4]=1;
		if(sx[2]=='C'&&sy[2]=='B')a[4]=1;
		if(sx[2]=='D'&&sy[2]=='F')a[4]=1;
		if(sx[2]=='F'&&sy[2]=='D')a[4]=1;
	}
	for(int i=1;i<=4;i++){
		cout<<a[i];
	}
	return 0;
} 
