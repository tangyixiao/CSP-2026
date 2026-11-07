#include<bits/stdc++.h>
using namespace std;
int a1,a2;
string b1,b2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>b1>>a2>>b2;
	if(a1==a2){
		cout<<1;
		if(b1[0]==b2[0]&&b1[1]==b2[1]){
			cout<<1;
			char a=b1[2],b=b2[2];
			if(65<=int(a)&&int(a)<=67&&65<=int(b)&&int(b)<=67){
				cout<<1;
				if(abs(int(a)-int(b))==1)	cout<<1;
				else	cout<<"0";
			}
			else if(68<=int(a)&&int(a)<=69&&68<=int(b)&&int(b)<=69)	cout<<"11";
			else	cout<<"00";
		}	
		else	cout<<"000";
	}
	else	cout<<"0000";
	return 0;
}
