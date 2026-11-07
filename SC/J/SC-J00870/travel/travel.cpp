#include<bits/stdc++.h>
using namespace std;
int x1,x2,shu1,shu2;
char lie1,lie2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
		char x;
		cin>>x;
		if(x=='1') x1+=10;
		int y;
		cin>>y;
		x1+=y;
		
		char m;
		cin>>m;
		if(m=='1') shu1+=10;
		int n;
		cin>>y;
		shu1+=y;
		
		cin>>lie1;
		
		char p;
		cin>>p;
		if(p=='1') x2+=10;
		int q;
		cin>>q;
		x2+=q;
		
		char h;
		cin>>h;
		if(h=='1') shu2+=10;
		int j;
		cin>>j;
		shu2+=j;
		
		cin>>lie2;
		
		if(x1==x2){
			cout<<1;
			if(shu1==shu2) cout<<1;
			else cout<<0;
			
			int flag=0;
			if(('A'<=lie1&&lie1<='C'&&'A'<=lie2&&lie2<='C')||('D'<=lie1&&lie1<='F'&&'D'<=lie2&&lie2<='F')) flag=1;
			if(shu1==shu2&&flag==1) cout<<1;
			else cout<<0;
			
			if(flag==1&&shu1==shu2){
				if('D'<=lie1&&lie1<='F'){
					cout<<1;
				} 
				else{
					if((lie1=='A'&&lie2=='C')||(lie1=='C'&&lie2=='A')) cout<<0;
					else cout<<1;
				}
			}
			else cout<<0;
		}
		else cout<<"0000";
	return 0;
} 