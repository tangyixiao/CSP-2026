#include<bits/stdc++.h>;
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,c3,c4;
	cin>>c1>>c2>>c3>>c4;
	if(c1==c3){
		cout<<1;
		int a=(c2[0]-'0')*10+(c2[1]-'0'),b=(c4[0]-'0')*10+(c4[1]-'0');
		if(a==b){
			cout<<1;
			if(c2[2]<='C'&&c2[2]>='A'&&c4[2]<='C'&&c4[2]>='A'){
				cout<<1;
				if(abs(c2[2]-c4[2])==1){
					cout<<1;
				}else{
					cout<<0;
				}
			}else if(c2[2]<='F'&&c2[2]>='D'&&c4[2]<='F'&&c4[2]>='D'){
				cout<<1;
				if(abs(c2[2]-c4[2])==1){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
};
