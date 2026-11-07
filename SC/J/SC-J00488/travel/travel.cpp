#include <bits/stdc++.h>
using namespace std;
string src,srz,sxc,sxz;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>src>>srz>>sxc>>sxz;
	if(src==sxc){
		cout<<"1";
		if(srz[0]==sxz[0]&&srz[1]==sxz[1]){
			cout<<"1";
			if((srz[2]<='C'&&sxz[2]<='C')||(srz[2]>'C'&&sxz[2]>'C')){
				cout<<"1";
				if(abs(srz[2]-sxz[2])==1){
					cout<<"1";
				}
				else cout<<"0"; 
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000"; 
	return 0;
}
