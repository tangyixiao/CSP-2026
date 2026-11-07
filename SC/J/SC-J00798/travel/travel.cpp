#include<bits/stdc++.h>
using namespace std;
string a1,b1,a2,b2,n,m;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>b1>>a2>>b2;
	if(a1[0]==a2[0]&&a1[1]==a2[1]){
		cout<<'1';
		if(b1[0]==b2[0]&&b1[1]==b2[1]){
			cout<<'1';
			if(b1[2]<='C'&&b2[2]<='C'||b1[2]>'C'&&b2[2]>'C'){
				cout<<'1';
				if(b1[2]-1==b2[2]||b1[2]+1==b2[2]){
					cout<<'1';
					return 0;
				}else{
					cout<<'0';
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