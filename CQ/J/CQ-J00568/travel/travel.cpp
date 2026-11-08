#include<bits/stdc++.h>
using namespace std;
int c1,c2,ss1,ss2;
string s1,s2;
char z1,z2;
void get(string s1,string s2){
	int sum=0;
	for(int i=0;i<2;i++){
		sum=sum*10+s1[i]-'0';
	}
	z1=s1[2];
	ss1=sum;
	sum=0;
	for(int i=0;i<2;i++){
		sum=sum*10+s2[i]-'0';
	}
	z2=s2[2];
	ss2=sum;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		get(s1,s2);
		if(ss1==ss2){
			cout<<1;
			if(z1<='C'&&z2<='C'){
				cout<<1;
				if((z1=='A'&&z2=='B')||(z1=='B'&&z2=='A')||(z1=='B'&&z2=='C')||(z1=='C'&&z2=='B'))cout<<1;
				else cout<<0;
			}
			else if(z1>'C'&&z2>'C'){
				cout<<"11";
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}
