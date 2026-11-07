#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
string c1,z1,c2,z2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0);
	cin>>c1>>z1>>c2>>z2;
	char x1=z1[2],x2=z2[2];
	if(c1==c2){
		cout<<'1';
	}else{
		cout<<"0000";
		return 0;
	}
	if(z1.substr(0,2)==z2.substr(0,2)){
		cout<<'1';
	}else{
		cout<<"000";
		return 0;
	}
	if((x1<='C'&&x2<='C')||(x1>='D'&&x2>='D')){
		cout<<'1';
		if(abs(int(x1-x2))==1){
			cout<<'1';
		}else{
			cout<<'0';
		}
	}else{
		cout<<"00";
	}
	return 0;
} 
