#include<bits/stdc++.h>
using namespace std;
int s1,s3;
char s2[4];
char s4[4];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1;
	for(int i=1;i<=3;i++){
		cin>>s2[i];
	}
	cin>>s3;
	for(int i=1;i<=3;i++){
		cin>>s4[i];
	}
	if(s1==s3){
		cout<<"1";
		int rche=(s2[1]-'0')*10+(s2[2]-'0');
		char rhao=s2[3];
		int xche=(s4[1]-'0')*10+(s4[2]-'0');
		char xhao=s4[3];
		if(rche==xche){
			cout<<"1";
			if(rhao>'C'&&xhao>'C'){
				cout<<"11";
			}else if(rhao<'D'&&xhao<'D'){
				cout<<"1";
				if((rhao=='A'&&xhao=='C')||(rhao=='C'&&xhao=='A')){
					cout<<"0";
				}else{
					cout<<"1";
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
	return 0;
}