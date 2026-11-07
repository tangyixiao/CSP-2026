#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,a1,c2,a2;
	cin>>c1>>a1>>c2>>a2;
	if(c1[0]==c2[0]&&c1[1]==c2[1]){
		cout<<1;
		if(a1[0]==a2[0]&&a1[1]==a2[1]){
			cout<<1;
			if((a1[2]<='C'&&a2[2]<='C')||(a1[2]>'C'&&a2[2]>'C')){
				cout<<1;
				if(abs(a1[2]-a2[2])==1){
					cout<<1;
				}
				else{
					cout<<"0";
				}
			}
			else{
				cout<<"00";
			}
		}
		else{
			cout<<"000";
		}
	}
	else{
		cout<<"0000";
	}
	return 0;
}
