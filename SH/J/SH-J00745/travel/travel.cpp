#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	int a1=(s1[0]-'0')*10+(s1[1]-'0');
	int a2=(s2[0]-'0')*10+(s2[1]-'0');
	char b1=s1[2],b2=s2[2];
	if(c1==c2){
		cout<<1;
		if(a1==a2){
			cout<<1;
			if((b1-'d')>=0&&(b2-'d')>=0){
				cout<<"11";
			}
			else if((b1-'d')<0&&(b2-'d')<0){
				cout<<1;
				if((b1=='A')&&(b2=='C')){
					cout<<0;
				}
				else if((b1=='C'&&b2=='A')){
					cout<<0;
				}
				else{
					cout<<1;
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
