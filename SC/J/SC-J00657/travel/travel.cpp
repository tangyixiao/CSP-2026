#include<bits/stdc++.h>
using namespace std;
string a1,s1,a2,s2;int b1,b2,h1,h2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>s1>>a2>>s2;
	if(a1==a2){
		cout<<1;
		for(int i=0;i<=1;i++){
			b1=s1[i]-'0';
			h1=h1*10+b1;
			b2=s2[i]-'0';
			h2=h2*10+b2;
		}
		if(h1==h2){
			cout<<1;
			b1=s1[2]-'A';
			b2=s2[2]-'A';
			if(b1<=2&&b2<=2){
				cout<<1;
				if(abs(b1-b2)==1){
					cout<<1;
				}
				else cout<<0;
			}
			else if(b1>=3&&b2>=3){
				cout<<"11";
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}