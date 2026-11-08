#include<bits/stdc++.h>
using namespace std;
string r1,r2,xx1,xx2;
bool a=0,b=0,c=0,d=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>r1>>r2>>xx1>>xx2;
	if(r1==xx1){
		a=1;
		//string p1=r2[0]+r2[1],p2=xx2[0]+xx2[1];
		if(r2[0]==xx2[0] && r2[1]==xx2[1]){
			b=1;
			char c1=r2[2],c2=xx2[2];
			if(c1=='A' || c1=='B' || c1=='C'){
				if(c2!=c1 && (c2=='A' || c2=='B' || c2=='C')){
					c=1;
					if((c2-1)==c1 || (c2+1)==c1){
						d=1;
					}
				}
			}
			else{
				if(c2!=c1 && (c2=='D' || c2=='F')){
					c=1;
					if((c2-1)==c1 || (c2+1)==c1){
						d=1;
					}
				}
			}
		}
	}
	cout<<a<<b<<c<<d;
	return 0;
}
