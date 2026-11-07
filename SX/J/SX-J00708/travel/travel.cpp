#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
string cti="ABC DF";
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	int a1=(s1[0]-'0')*10+s1[1]-'0';
	int a2=(s2[0]-'0')*10+s2[1]-'0';
	int b1=cti.find(s1[2]);
	int b2=cti.find(s2[2]);
	if(c1==c2){
		cout<<"1";
		if(a1==a2){
			cout<<"1";
			if((b1<3&&b2<3)||(b1>3&&b2>3)){
				cout<<"1";
				if(abs(b1-b2)==1){
					cout<<"1";
				}else cout<<"0";
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
	return 0;
}