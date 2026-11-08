#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	float a1,b1,a2,b2;
	cin>>a1>>b1>>a2>>b2;
	float ans=0;
	while(a1!=0){
		a1=a1/10;
		if(a1>='1'&&a1<='18'){
			ans=a1;		
		}
	}
	float a=0;
	while(a2!=0){
		a2=a2/10;
		if(a2>='1'&&a2<='18'){
			a=a2;		
		}
	}
	if(ans==a){
		cout<<"1";
	}else{
		cout<<"0";
	}
	float m=0,s=0,sa=0;
	float w=0,y=0,wy=0;
	while(b1!=0){
		b1=b1/10;
		if(b1>='1'&&b1<='18'){
			m=b1;		
		}
		if(b1>='A'&&b1<='C'){
			s=b1;
		}
		if(b1>='D'&&b1<='E'){
			sa=b1;
		}
	}
	while(b2!=0){
		b2=b2/10;
		if(b2>='1'&&b2<='18'){
			w=b2;		
		}
		if(b2>='A'&&b2<='C'){
			y=b2;
		}
		if(b2>='D'&&b2<='E'){
			wy=b2;
		}
	}
	if(m==w){
		cout<<"1";
	}else{
		cout<<"0";
	}
	if(s==y){
		cout<<"1";
	}else{
		if(sa==wy){
		   cout<<"1";
	    }else{
		   cout<<"0";
	    }
	}
	if(s=='A'&&y=='B'||y=='A'&&s=='B'){
		cout<<"1";
	}else if(s=='B'&&y=='C'||y=='B'&&s=='C'){
		cout<<"1";
	}else{
		if(wy=='D'&&sa=='E'||sa=='D'&&wy=='E'){
		  cout<<"1";
	    }else{
		  cout<<"0";
	    }
	}
	return 0;
}
