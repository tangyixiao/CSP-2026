#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int o,t;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;//1
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<1;//2
			if(s1[2]<='C')o=s1[2]-'A';
			else o=s1[2]-'A'+10;
			if(s2[2]<='C')t=s2[2]-'A';
			else t=s2[2]-'A'+10;
			if(o+t<=3||o+t==28){
				cout<<1;
				if(o+t==1||o+t==3||o+t==28)cout<<1;
				else cout<<0;
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
}
