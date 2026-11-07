#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a1,b1,a2,b2;
	cin>>a1>>b1>>a2>>b2;
	int c1,c2,z1,z2;
	if (a1[0]==0){
		c1=a1[1]-'0';
	}else{
		c1=a1[1]-'0'+10;
	}
	if (a2[0]==0){
		c2=a2[1]-'0';
	}else{
		c2=a2[1]-'0'+10;
	}
	if (b1[0]==0){
		z1=b1[1]-'0';
	}else{
		z1=b1[1]-'0'+10;
	}
	if (b2[0]==0){
		z2=b2[1]-'0';
	}else{
		z2=b2[1]-'0'+10;
	}
	char m1,m2;
	m1=b1[2];
	m2=b2[2];
	if (c1==c2){
		cout<<1;
	}else{
		cout<<0;
	}
	if (c1==c2&&z1==z2){
		cout<<1;
	}else{
		cout<<0;
	}
	if (c1==c2&&z1==z2&&((m1+m2=='F'+'D')||(m1<='C'&&m2<='C'))){
		cout<<1;
	}else{
		cout<<0;
	}
	if (c1==c2&&z1==z2&&((m1+m2=='F'+'D')||((m1<='C'&&m2<='C')&&abs(m1-m2)==1))){
		cout<<1;
	}else{
		cout<<0;
	}
	cout<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
