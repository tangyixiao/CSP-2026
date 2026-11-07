#include<bits/stdc++.h>
using namespace std;
int a1,b1,a2,b2,t1,t2,t3,t4,e1,e2;
char a3,b3;
string s11,s12,s21,s22;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s11>>s12>>s21>>s22;
	a1=(s11[0]-'0')*10+s11[1]-'0';
	b1=(s21[0]-'0')*10+s21[1]-'0';
	a2=(s12[0]-'0')*10+s12[1]-'0';
	b2=(s22[0]-'0')*10+s22[1]-'0';
	a3=s12[2];b3=s22[2];
	if(a1==b1)t1=1;
	if(a2==b2&&t1==1)t2=1;
	if(a3<='C')e1=1;else e1=2;
	if(b3<='C')e2=1;else e2=2;
	if(t2==1&&e1==e2)t3=1;
	if(t3==1){
		if(e1==1&&abs(a3-b3)==1){
			t4=1;
		}
		if(e1==2&&abs(a3-b3)==2){
			t4=1;
		}
	}
	cout<<t1<<t2<<t3<<t4;
	return 0;
} 