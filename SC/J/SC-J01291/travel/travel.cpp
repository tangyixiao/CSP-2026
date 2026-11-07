#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string r_c,x_c,r_z,x_z;
	cin>>r_c>>r_z>>x_c>>x_z;
	if(r_c==x_c){
		cout<<1;
		if(r_z[0]==x_z[0]&&r_z[1]==x_z[1]){
			cout<<1;
			if((r_z[2]<='C'&&x_z[2]<='C')||(r_z[2]>'C'&&x_z[2]>'C')){
				cout<<1;
				if(r_z[2]+1==x_z[2]||r_z[2]==x_z[2]+1){
					cout<<1;
				}else{
					cout<<0;
				}
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