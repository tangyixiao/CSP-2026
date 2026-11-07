#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int ca,cb;
	string za,zb;
	cin>>ca>>za>>cb>>zb;
	if(ca!=cb){
		cout<<"0000";
	}else if(za[1]!=zb[1]||za[0]!=zb[0]){
		cout<<"1000";
	}else if(!((za[2]=='A'||za[2]=='B'||za[2]=='C')&&(zb[2]=='A'||zb[2]=='B'||zb[2]=='C')||((za[2]=='D'||za[2]=='F')&&(zb[2]=='F'||zb[2]=='D')))){
		cout<<"1100";
	}else if(abs(int(za[2]-zb[2]))>1&&((za[2]=='A'||za[2]=='B'||za[2]=='C')&&(zb[2]=='A'||zb[2]=='B'||zb[2]=='C'))){
		cout<<"1110";
	}else{
		cout<<"1111";
	}
    return 0;
} 