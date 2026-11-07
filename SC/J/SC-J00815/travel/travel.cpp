#include<bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2;
int h1,h2;
int l1,l2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	h1=(s1[0]-'0')*10+(s1[1]-'0');
	h2=(s2[0]-'0')*10+(s2[1]-'0');
	l1=s1[2]-'A';
	l2=s2[2]-'A';
	if(c1==c2){
		cout<<1;
		if(h1==h2){
			cout<<1;
			if((l1<3&&l2<3)||(l1>=3&&l2>=3)){
				cout<<1;
				if(abs(l1-l2)==1){
					cout<<1;
				}else{
					cout<<0; 
				}
			}else{
				cout<<0;
				cout<<0;
			}
		}else{
			cout<<0;
			cout<<0;
			cout<<0;
		}
	}else{
		cout<<0;
		cout<<0;
		cout<<0;
		cout<<0;
	}
	return 0;
}