#include<bits/stdc++.h>
using namespace std;
bool ne(char a,char b){
	if(a+1==b || b+1==a){
		return true;
	}
	return false;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int rn,xn;
	string rs,xs;
	cin>>rn>>rs>>xn>>xs;
	bool flag1=false,flag2=false,flag3=false;
	if(rn==xn){
		cout<<1;
		flag1=true;
	}
	else{
		cout<<0;
	}
	if(rs[0]==xs[0] && rs[1]==xs[1] && flag1==true){
		cout<<1;
		flag2=true;
	}
	else{
		cout<<0;
	}
	if(flag2==true && (((rs[2]=='D' || rs[2]=='F')&&(xs[2]=='D' || xs[2]=='F'))||((rs[2]=='A' || rs[2]=='B' || rs[2]=='C')&&(xs[2]=='A' || xs[2]=='B' || xs[2]=='C')))){
		cout<<1;
		flag3=true;
	}
	else{
		cout<<0;
	}
	if(ne(rs[2],xs[2]) && flag3==true){
		cout<<1;
	}
	else{
		cout<<0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
