#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b,c,d;
	for(int i=0;i<=1;i++){
		cin>>a[i];
	}
	for(int i=0;i<=2;i++){
		cin>>b[i];
	}
	for(int i=0;i<=1;i++){
		cin>>c[i];
	}
	for(int i=0;i<=2;i++){
		cin>>d[i];
	}
	int a1=0;
	for(int i=0;i<=1;i++){
		if(a[i]!=c[i]){
			cout<<0;
			a1=1;
		}
	}
	if(a1==0) cout<<1;
	int a2=0;
	for(int i=0;i<=1;i++){
		if(b[i]!=d[i]||a1==1){
			cout<<0;
			a2=1;
			break;
		}
	}
	if(a2==0) cout<<1;
	int a3=0;
	if(((b[2]>='A'&&b[2]<='C')&&(d[2]>='D'&&d[2]<='E'))||((d[2]>='A'&&d[2]<='C')&&(b[2]>='D'&&b[2]<='E'))||a2==1){
		cout<<0;
		a3=1;
	}
	if(a3==0) cout<<1;
	int a4=0;
	if(a3==1||a2==1||fabs(b[2]-d[2])!=1){
		cout<<0;
		a4=1;
		} 
	if(a4==0) cout<<1;
	return 0;
	
}