#include<bits/stdc++.h>
using namespace std;
int a,x,flag1,flag2,flag3;
string b,y;
bool judge(char a,char b){
	if(a=='F'){
		if(b=='D')return 1; 
		else return 0;
	}
	if(a=='D'){
		if(b=='F')return 1; 
		else return 0;
	}
	if(a=='C'){
		if(b=='B' || b=='A')return 1;
		else return 0;
	}
	if(a=='B'){
		if(b=='C' || b=='A')return 1;
		else return 0;
	}
	if(a=='A'){
		if(b=='B' || b=='C')return 1;
		else return 0;
	}
}
bool judge2(char a,char b){
	if(a=='F'){
		if(b=='D')return 1; 
		else return 0;
	}
	if(a=='D'){
		if(b=='F')return 1; 
		else return 0;
	}
	if(a=='C'){
		if(b=='B')return 1;
		else return 0;
	}
	if(a=='B'){
		if(b=='C' || b=='A')return 1;
		else return 0;
	}
	if(a=='A'){
		if(b=='B')return 1;
		else return 0;
	}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	
	cin>>a>>b>>x>>y;
	if(a==x){
		flag1=1;
		cout<<1;
	}
	else cout<<0;
	if(flag1 && b[0]==y[0] && b[1]==y[1]){
		cout<<1;
		flag2=1;
	}
	else cout<<0;
	if(flag2 && judge(b[2],y[2])){
		flag3=1;
		cout<<1;
	}
	else cout<<0;
	if(flag3 && judge2(b[2],y[2])){
		cout<<1;
	}
	else cout<<0;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
