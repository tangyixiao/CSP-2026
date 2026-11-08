#include<bits/stdc++.h>
using namespace std;
string r_c,r_z,x_c,x_z;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>r_c;
	cin>>r_z;
	cin>>x_c;
	cin>>x_z;
//	cout<<"r_c:"<<r_c<<endl;
//	cout<<"r_z:"<<r_z<<endl;
//	cout<<"x_c:"<<x_c<<endl;
//	cout<<"x_z:"<<x_z<<endl;
	if(r_c==x_c){
		cout<<1;
		if(r_z[0]==x_z[0] && r_z[1]==x_z[1]){
			cout<<1;
			if((r_z[2]<='C') == (x_z[2]<='C')){
				cout<<1;
				if(abs((int)(r_z[2]-x_z[2]))==1) cout<<1;
				else cout<<0;
			}
			else cout<<0<<0;
		}
		else cout<<0<<0<<0;
	}
	else cout<<0<<0<<0<<0;
	return 0;
}

