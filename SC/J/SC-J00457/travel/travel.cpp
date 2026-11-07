#include<bits/stdc++.h>
using namespace std;
string co1,so1,co2,so2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>co1>>so1>>co2>>so2;
	if(co1==co2 && co1!="01" && co1!="16"){
		cout<<"1";
		if(so1[0]==so2[0] && so1[1]==so2[1]){
			cout<<"1";
			if((so1[2]<='C' && so2[2]<='C') || (so1[2]>='D' && so2[2]>='D')){
				cout<<"1";
				if(abs(so1[2]-so2[2])==1){
					cout<<"1";
				}else{
					cout<<"0";
					return 0;
				}
			}else{
				cout<<"00";
				return 0;
			}
		}else{
			cout<<"000";
			return 0;
		}
	}else{
		cout<<"0000";
		return 0;
	}
	return 0;
}