#include<bits/stdc++.h>
using namespace std;
string c1,c2,a1,a2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>a1>>c2>>a2;
	if(c1==c2){
		cout<<1;
		if((a1[0]+a1[1])==(a2[0]+a2[1])){
			cout<<1;
			if((a1[2]<='F'&&a1[2]>='D')&&(a2[2]<='F'&&a2[2]>='D')){
				cout<<"11";
				return 0;
			}else if((a1[2]<='C'&&a2[2]<='C')){
				cout<<1;
				if(abs((int)a1[2]-(int)a2[2])==1)cout<<1;
				else cout<<0;
			}
			else{
				cout<<"00";
			}
			
		}else cout<<"000";
	}
	else cout<<"0000";

	return 0;
}