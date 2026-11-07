#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c1,c2;
	cin>>a>>c1>>b>>c2;
	if(a==b){
		cout<<"1";
		if(c1[0]==c2[0]&&c1[1]==c2[1]){
			cout<<"1";
			if((c1[2]>'C'&&c2[2]>'C')||(c1[2]<='C'&&c2[2]<='C')){
				cout<<"1";
				if(abs(c1[2]-c2[2])==1){
					cout<<"1";
				}else{
					cout<<"0";
				}
			}else{
				cout<<"0"<<"0";
			}
		}else{
			cout<<"0"<<"0"<<"0";
		}
	}else{
		cout<<"0"<<"0"<<"0"<<"0";
	}
	return 0;
} 