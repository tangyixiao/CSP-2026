#include<bits/stdc++.h>
using namespace std;
#define int long long
int s,c;
string s1,c1;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin.tie(0);
	cout.tie(0);
	cin>>s>>s1>>c>>c1;
	//cout<<"I love cici";
	int seat=(s1[0]-48)*10+(s1[1]-48);
	int seat1=(c1[0]-48)*10+(c1[1]-48);
	if(s==c){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	if(seat1==seat){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	if((s1[2]=='A'&&c1[2]=='B')||(s1[2]=='B'&&c1[2]=='A')||(s1[2]=='A'&&c1[2]=='C')||(s1[2]=='C'&&c1[2]=='A')||(s1[2]=='C'&&c1[2]=='B')||(s1[2]=='B'&&c1[2]=='C')||(s1[2]=='D'&&c1[2]=='F')||(s1[2]=='F'&&c1[2]=='D')){
		cout<<1;
	}else{
		cout<<"00";
		return 0;
	}
	if((s1[2]=='A'&&c1[2]=='B')||(s1[2]=='B'&&c1[2]=='A')||(s1[2]=='C'&&c1[2]=='B')||(s1[2]=='B'&&c1[2]=='C')||(s1[2]=='D'&&c1[2]=='F')||(s1[2]=='F'&&c1[2]=='D')){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
} 