#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string cx1,zw1,cx2,zw2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>cx1;
	cin>>zw1;
	cin>>cx2;
	cin>>zw2;
	if(cx1 == cx2){
		cout<<1;
		if(zw2.substr(0,2) == zw1.substr(0,2)){
			cout<<1;
			if(zw1.substr(2,1) == "A"||zw1.substr(2,1) == "B"||zw1.substr(2,1) == "C"){
				if(zw2.substr(2,1) == "A"||zw2.substr(2,1) == "B"||zw2.substr(2,1) == "C"){
					cout<<1;
					string zw1p=zw1.substr(2,1),zw2p = zw2.substr(2,1);
					if(zw1p == "A"&& zw2p =="B")cout<<1;
					else if(zw1p == "B" && (zw2p == "A" || zw2p == "C"))cout<<1;
					else if(zw1p == "C"&& zw2p == "B")cout<<1;
					else{
						cout<<"00";
						return 0;
					}
				}
				else{
					cout<<"00";
					return 0;
				}
			}
			else if(zw1.substr(2,1) == "D"|| zw1.substr(2,1) == "F"){
					if(zw2.substr(2,1) == "D" || zw2.substr(2,1) == "F"){
						cout<<1;
						string zw1p=zw1.substr(2,1),zw2p = zw2.substr(2,1);
						if(zw1p == "D" && zw2p == "F")cout<<1;
						else if(zw1p == "F" && zw2p == "D")cout<<1;
						else{
							cout<<0;
							return 0;
						}
					}
					else{
						cout<<"00";
						return 0;
					}
				}
			}
			else{
				cout<<"000"<<endl;
				return 0;
			}
		}
		else{
			cout<<"0000"<<endl;
			return 0;
		}
	return 0;
}
