#include<bits/stdc++.h>
using namespace std;
char s11,s12,s13,s21,s22,s23;
int c1,c2;
void shuru(){
	cin>>c1>>s11>>s12>>s13>>c2>>s21>>s22>>s23;
}
void sflin(){
	int a=s13;
	int b=s23;
	if(b==a-1 or b==a+1){
		cout<<"1";
	}else{
		cout<<"0";
	}
}
void ce(){
	int c,d;
	c=s13;
	d=s23;
	if(c==65){
		if(d==66){
			cout<<"1";
			sflin();
		}
		if(d==67){
			cout<<"1";
			sflin();
		}
		if(d==68 or d==69){
			cout<<"00";
		}
	}	
	if(c==66){
		if(d==65 or d==67){
			cout<<"1";
			sflin();
		}
		if(d==68 or d==69){
			cout<<"00";
		}
	}
	if(c==67){
		if(d==65){
			cout<<"1";
			sflin();
		}
		if(d==66){
			cout<<"1";
			sflin();
		}
		if(d==68 or d==69){
			cout<<"00";
		}
	}
	if(c==68){
		if(d==69){
			cout<<"1";
			sflin();
		}else{
			cout<<"00";
		}
	}
	if(c==69){
		if(d==68){
			cout<<"1";
			sflin();
		}else{
			cout<<"00";
		}
	}	
}
void work(){
	if(c1==c2){//jie
		cout<<"1";
		if(s11==s21){//pai
			if(s12==s22){
				cout<<"1";
				ce();					
			}else{
				cout<<"000";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	shuru();
	work();
	fclose(stdin);
	fclose(stdout);
	return 0;
}
