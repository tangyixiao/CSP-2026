#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string z1,z2;
	int r;
	cin>>c1>>z1>>c2>>z2;
	int w1,w2;
		if(c1!=c2){
			cout<<"0000";
			return 0;
		}
		else cout<<"1";
		if(z1[1]==z2[1]&&z1[0]==z2[0]){
			cout<<"1";
			if(z1[2]<='C'&&z2[2]<='C'){
			cout<<"1";
			r++;
		}
			else if(z1[2]>='E'&&z2[2]>='E'){
			cout<<"1";
			r++;
		}
			else cout<<"0";
		}
		else cout<<"00";
		
		int k1=z1[2];
		int k2=z2[2];
		if(k1+1==k2&&r!=0)cout<<"1";
		else cout<<"0";
	return 0;
} 
