#include<bits/stdc++.h>
using namespace std;
string ca,cb,za,zb;
bool a=0,b=0,c=0,d=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>ca>>za>>cb>>zb;
	int ia=(ca[0]-'0')*10+ca[1]-'0',ib=(cb[0]-'0')*10+cb[1]-'0';
	if(ia==ib){
		a=1;
		if(za[0]==zb[0]&&za[1]==zb[1]){
			b=1;
			if(za[3]-'C'<=0&&zb[3]-'C'<=0)c=1;
			else if(za[3]-'C'>0&&zb[3]-'C'>0)c=1;
			if(c){
				if(abs(int(za[3])-int(zb[3]))==1){
					if(!((za[3]=='C'&&zb[3]=='D')||(za[3]=='D'&&zb[3]=='C'))){
					d=1;
					}
				}
			}
		}
	}
	
	cout<<a<<b<<c<<d;
	return 0;
}
