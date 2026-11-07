#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char a,b,c,d,e,a1,b1,c1,d1,e1;
	bool f=false,f1=false,f2=false;
	cin>>a>>b>>c>>d>>e>>a1>>b1>>c1>>d1>>e1;
	cout<<(a==a1&&b==b1);
	if(c==c1&&d==d1){
		cout<<1;
		f=true;
	}else{
		cout<<0;
	}
	if(f){
		if(e=='A'||e=='B'||e=='C'){
			if(e1=='A'||e1=='B'||e1<='C'){
				cout<<1;
				f1=true;
			}
		}else{
			if(e1=='D'||e1=='E'){
				cout<<1;
				f2=true;
			}
		}
	}
	if(f1==false&&f2==false){
		cout<<0;
	} 
	if((e=='A'&&e1=='B')||(e=='B'&&e1=='A')||(e=='C'&&e1=='B')||(e=='B'&&e1=='C')||(e=='D'&&e1=='E')||(e=='E'&&e1=='D')){
		cout<<1;
	} else{
		cout<<0;
	}
	return 0;
}
