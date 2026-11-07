#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,s1,s2,h,k;
	char n,m;
	cin>>c1>>s1>>c2>>s2;
	bool a=0,b=0,c=0,d=0;
	if(c1==c2){
		cout<<1;
		a=1;
	}else{
		cout<<0;
	}
	if(a==1){
		for(int i=0;i<2;i++){
			h=h+s1[i];
			k=k+s2[i];
		}
		if(h==k){
			cout<<1;
			b=1;
		}else{
			cout<<0;
		}
	}else{
		cout<<0;
	}
	if(a==1){
		if(b==1){
			n=s1[2];
			m=s2[2];
			bool t=0;
			if('D'<=n&&n<='E'&&'D'<=m&&m<='E'){
				cout<<'1';
				t=1;
			}
			if('A'<=n&&n<='C'&&'A'<=m&&m<='C'){
				cout<<'1';
				t=1;
			}
			if(t==0){
				cout<<0;
			}
		}else{
			cout<<0;
		}
	}else{
		cout<<0;
	}
	if(a==1){
		if(b==1){
			n=s1[2];
			m=s2[2];
			bool t=0;
			if('D'<=n&&n<='E'&&'D'<=m&&m<='E'){
				cout<<'1';
				t=1;
			}
			if('A'<=n&&n<='C'&&'A'<=m&&m<='C'){
				if(n==m+1||n==m-1){
					cout<<1;
					t=1;
				}
			}
			if(t==0){
				cout<<0;
			}
		}else{
			cout<<0;
		}
	}else{
		cout<<0;
	}
	return 0;
}