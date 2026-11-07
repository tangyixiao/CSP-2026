#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	fropen("travel.in","r",stdin);
	fropen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;

		int a=0,b=0,c,d,jishu=0;
		
	if(c1==c2){
		cout<<1;
		jishu=1;
	}else{
		cout<<0;
	}
	
	a=s1[0];
	b=s2[0];
	c=s1[1];
	d=s2[1];

	if(a==b&&c==d){
		if(jishu==1){
				cout<<1;//
				jishu=1;	
		}else{
			cout<<0;
		}
	}else{
		cout<<0;
		jishu==0; 
	}

	a=s1[2];
	b=s2[2];
if(jishu==1){
	if(a==65||a==66||a==67){
			if(b==65||b==66||b==67){
			cout<<1;//
			jishu=2;
		}else{
			cout<<0;
		}
	}else	if(a==68||a==69){
			if(b==68||b==69){
			cout<<1;//
			jishu=3;
		}else{
			cout<<0;
		}
	}else{
		cout<<0; 
	}


	if(jishu==2){
		if(a-b==1||b-a==1){
		cout<<1;
	}		else {
			cout<<0;}
	}else if(jishu==3){
		cout<<1;
	}		else{
			cout<<0;
	}
}else{
	cout<<0<<0;
}
return 0;
}
