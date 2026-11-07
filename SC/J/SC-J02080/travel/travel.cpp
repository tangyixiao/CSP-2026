#include<bits/stdc++.h> 
using namespace std;
string rx,rz,xx,xz,jg;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>rx>>rz>>xx>>xz;
	if(rx==xx){
		jg[0]='1';
		if(rz[0]==xz[0]&&rz[1]==xz[1]){
			jg[1]='1';	
				if(rz[2]>='A'&&rz[2]<='C'&&xz[2]>='A'&&xz[2]<='C'){
			    jg[2]='1';
			        if(rz[2]+1==xz[2]||xz[2]+1==rz[2]){
			            	jg="1111";
		            }else jg="1110";
		        }else if(rz[2]>='D'&&rz[2]<='F'&&xz[2]>='D'&&xz[2]<='F'){
		            	jg="1111";
		        }else jg="1100";
		}else jg="1000";
	}else jg="0000";
	cout<<jg;
	return 0;
}