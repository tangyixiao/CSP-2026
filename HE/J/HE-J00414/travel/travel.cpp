#include<bits/stdc++.h>
using namespace std;
string c1,c2;
char h1,h2,h3,h4,s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>h1>>h2>>s1>>c2>>h3>>h4>>s2;
	if(c1==c2){
		cout<<1;
		if(h1==h3&&h2==h4){
			cout<<1;
			if(s1>='D'&&s2<='C'||s1<='C'&&s2>='D'){
				cout<<"00";
			}else{
				cout<<"1";
				if(max(s1,s2)-min(s1,s2)==1){
					cout<<"1";
				}else{
					cout<<"0";
				}
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
} 
