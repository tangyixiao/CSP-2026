#include<bits/stdc++.h>
using namespace std;
#define int long long
const int RP=LLONG_MAX; 
signed main(){
	cin.tie(0);cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	int ra=s1[1]-'0'+(s1[0]-'0')*10,rb=s2[1]-'0'+(s2[0]-'0')*10,rc=s2[2]-'A'+1;
	int xa=s3[1]-'0'+(s3[0]-'0')*10,xb=s4[1]-'0'+(s4[0]-'0')*10,xc=s4[2]-'A'+1;
	if(rc=='6') rc=5;
	if(xc=='6') xc=5;
	if(ra!=xa) cout<<"0000";
	else if(rb!=xb) cout<<"1000";
	else if((rc<=3&&xc>3)||(rc>=4&&xc<4)) cout<<"1100";
	else if(rc-xc>=2) cout<<"1110";
	else cout<<"1111";
	return 0;
} 
