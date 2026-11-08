#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,az,b,bz;
	char za,zb;
	cin>>a>>az>>za>>b>>bz>>zb;
	if(a==b){
		cout<<1;
		if(az==bz){
			cout<<1;
			if(za>='A'&&za<='C'&&zb>='A'&&zb<='C'){
				cout<<1;
				if(abs(za-zb)==1){
					cout<<1;
				}else{
					cout<<"0";
				}
			}else if(za>='D'&&za<='F'&&zb>='D'&&zb<='F'){
				cout<<11;
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
} 
