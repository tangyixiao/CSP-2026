#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int a1,b1,a2,b2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	a1=(s1[0]-'0')*10+(s1[1]-'0');
	a2=(s2[0]-'0')*10+(s2[1]-'0');
	if(s1[2]=='F') b1=5;
	else b1=s1[2]-'A'+1;
	if(s2[2]=='F') b2=5;
	else b2=s2[2]-'A'+1;
	if(c1==c2){
		cout<<1;
		if(a1==a2){
			cout<<1;
			if((b1<=3&&b2<=3)||(b1>3&&b2>3)){
				cout<<1;
				if(abs(b1-b2)==1){
					if((b1==4&&b2==3)||(b1==3&&b2==4)) cout<<0;
					else cout<<1;
				}else cout<<0;
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
	return 0;
}