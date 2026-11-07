#include<bits/stdc++.h>
using namespace std;
string Ac,Al,Bc,Bl;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>Ac>>Al>>Bc>>Bl;
	if(Ac!=Bc){
		cout<<"0000";
	}
	else{
		cout<<'1';
		if(Al[0]!=Bl[0] or Al[1]!=Bl[1]){
			cout<<"000";
		}
		else{
			cout<<"1";
			int a=Al[2]-'A',b=Bl[2]-'A';
			bool ka=a>2,kb=b>2;
			if(ka==kb){
				cout<<"1";
				if(a==0 and b==2 or a==2 and b==0){
					cout<<"0";
				}
				else cout<<"1";
			}
			else cout<<"00";
		}
	}
}
