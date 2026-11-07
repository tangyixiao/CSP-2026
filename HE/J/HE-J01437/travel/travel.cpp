#include<bits/stdc++.h>
using namespace std;
string a1,b1,a2,b2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>b1>>a2>>b2;
	if(a1!=a2){
		cout<<"0000";
		return 0;
	}
	cout<<"1";
	
	if(b1[0]==b2[0]&&b1[1]==b2[1]){
		cout<<"1";
		if(b1[2]<='C'&&b1[2]>='A'&&b2[2]<='C'&&b2[2]>='A'){
			cout<<"1";
			char z1=b1[2]+1,z2=b2[2]+1;
			if(b1[2]==z2||b2[2]==z1){
				cout<<"1";
			}else cout<<"0";
		}else if(b1[2]<='E'&&b1[2]>='D'&&b2[2]<='E'&&b2[2]>='D'){
			cout<<"11";
		}else  cout<<"00";
	}else{
		cout<<"000";
		return 0;
	}
	
	return 0;
}
