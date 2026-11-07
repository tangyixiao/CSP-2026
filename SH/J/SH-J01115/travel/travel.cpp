#include<bits/stdc++.h>
using namespace std;
string s1,s2,c1,c2;
int a1,a2,b1,b2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	a1=s1[1]-'0';
	b1=s2[1]-'0';
	if(s1[2]=='D')a2=5;
	else a2=s1[2]-'A'+1;
	if(s2[2]=='D')b2=5;
	else b2=s2[2]-'A'+1;
	if(s1[0]!='0'){
		a1+=10;
	}
	if(s2[0]!='0'){
		b1+=10;
	}
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}else{
		cout<<1;
		if(a1!=b1){
			cout<<"000";
			return 0;
		}
		cout<<1;
		if((a2<=3&&b2<=3)||a2>=5&&b2>=5){
			cout<<1;
			if(a2==b2+1||b2==a2+1){
				cout<<1;
			}else cout<<0;
		}else{
			cout<<"00";
			return 0;
		}
	}
	return 0;
}
