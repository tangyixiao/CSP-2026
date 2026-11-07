#include<bits/stdc++.h>
using namespace std;
string a,z,a1,z1;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>z>>a1>>z1;
	if(a==a1){
		cout<<'1';
		if(z[1]==z1[1]&&z[0]==z1[0]){
			cout<<'1';
			if(z[2]+1==z1[2]||z1[2]+1==z[2]){
				if(z[2]=='D'&&z1[2]=='C'||z1[2]=='D'&&z[2]=='C'){
					cout<<"00";
					return 0;
				}
				cout<<"11";
			}
			else if(z[2]=='C'&&z1[2]=='A'||z[2]=='A'&&z1[2]=='C'){
				cout<<"10";
			}
			else cout<<"00";
		}
		else{
			cout<<"000";
			return 0;
		}
	}
	else{
		cout<<"0000";
		return 0;
	}
	
	return 0;
}
