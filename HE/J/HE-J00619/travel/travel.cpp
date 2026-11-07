#include<bits/stdc++.h>
#define int long long
using namespace std;
string z1,s1,z2,s2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>z1>>s1>>z2>>s2;
	int a1=(z1[0]-'0')*10+(z1[1]-'0');
	int a2=(z2[0]-'0')*10+(z2[1]-'0');
	int b1=(s1[0]-'0')*10+(s1[1]-'0');
	int b2=(s2[0]-'0')*10+(s2[1]-'0');
	char c1=s1[2],c2=s2[2];
	bool f=true;
	if(a1==a2){
		cout<<1;
	}else{
		f=false;
		cout<<0;
	}
	if(f&&b1==b2){
		cout<<1;
	}else{
		f=false;
		cout<<0;
	}
	if(f){
		if(c1<='C'&&c2<='C'){
			if(abs(c1-c2)==1){
				cout<<"11";
			}else{
				cout<<"10"; 
			}
		}else if((c1=='D'&&c2=='F')||(c1=='F'&&c2=='D')){
			cout<<"11";
		}else{
			cout<<"00";
		}
	}else{
		cout<<"00";
	}
	return 0;
}
