#include<bits/stdc++.h>
using namespace std;
int main(){
//	freopen("travel.in","r",stdin);
//	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)cout<<1;
	else{
		cout<<"0000";
		return 0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1])cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	int rp,xp;
	if(s1[2]-'A'<3)rp=1;
	else rp=0;
	if(s2[2]-'A'<3)xp=1;
	else xp=0;
	if(rp==xp)cout<<1;
	else cout<<0;
	bool flag=(rp==xp);
	if(!flag){
		cout<<0;
		return 0;
	}else{
		int xz=s2[2]-'A',rz=s1[2]-'A';
		if(abs(xz-rz)==1)cout<<1;
		else cout<<0;
	}return 0;
} 
