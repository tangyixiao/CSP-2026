#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a[19][6],a1=0,b,d,b1;
	char c1,s1,c2,s2;
	b='A';
	d='A';
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
	}else{
		cout<<0;
	}
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			if('s1'-b=='s2'-d){
				cout<<1;
				a1=1;
			}
			if(j<=4){
				d=d+1;
			}
			else{
				d=d+2;
			}
		}
		if(i<=4){
			b=b+1;
		}
		else{
			b=b+2;
		}
		if(i==5&&a1==0){
			cout<<0;
		}
	}
	for(int i=1;i<=18;i++){
		for(int j=1;j<=18;j++){
			if('s1'==65||'s1'==66+b||'s1'==67&&'s2'==65||'s2'==66||'s2'==67){
				cout<<1;
				if('s1'+1=='s2'||'s1'-1=='s2'){
					cout<<1;
				}
				a1=4;
				}
			if('s1'=='D'||'s1'=='F'&&'s2'=='D'||'s2'=='F'){
				cout<<1;
				cout<<1;
				a1=100;
			}
		
		}
	}
		if(a1==0){
			cout<<0<<0<<0;
		}
		if(a1==1){
			cout<<1<<1;
		}
		if(a1==4){
			cout<<0;
		}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
