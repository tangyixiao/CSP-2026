#include<bits/stdc++.h>
using namespace std;
#define int long long
int x,xx,y,yy;
string a1,a2,b1,b2;
signed main(){
	//printf()
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>a2>>b1>>b2;
	x = (a1[0]-'0')*10+(a1[1]-'0');
	y = (b1[0]-'0')*10+(b1[1]-'0');
	xx = (a2[0]-'0')*10+(a2[1]-'0');
	yy = (b2[0]-'0')*10+(b2[1]-'0');
	if(x==y){
		cout<<1;
		if(xx==yy){
			cout<<1;
			if(a2[2]<='C'&&b2[2]<='C'){
				cout<<1;
				if((a2[2]<='B'&&b2[2]<='B')||(a2[2]>='B'&&b2[2]>='B')) cout<<1;
				else cout<<0;
			}
			else if(a2[2]>='D'&&b2[2]>='D') cout<<"11";
			else cout<<"00";
		} 
		else cout<<"000";
	} 
	else cout<<"0000";
	return 0;
}

