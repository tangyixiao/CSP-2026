#include<bits/stdc++.h>
using namespace std;
string x,y,z,k;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>x>>y>>z>>k;
	if(x[0]==z[0]&&x[1]==z[1]){
		cout<<1;
		if(y[0]==k[0]&&y[1]==k[1]){
			cout<<1;
			if(((y[2]=='A'||y[2]=='B'||y[2]=='C')&&(k[2]=='A'||k[2]=='B'||k[2]=='C')||(y[2]=='D'||y[2]=='F')&&(k[2]=='D'||k[2]=='F'))){
				cout<<1;
				if((y[2]=='C'&&k[2]=='D')||(y[2]=='D'&&k[2]=='C')||abs(y[2]-k[2])!=1) cout<<0;
				else cout<<1;
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}
