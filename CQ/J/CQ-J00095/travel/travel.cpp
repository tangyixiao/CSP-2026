#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<1;
		int tip=0;
		for(int i=0;i<=1;i++){
			if(b[i]!=d[i]){
				tip=1;
			}
		}
		if(tip){
			cout<<0<<0<<0;
		}else{
			cout<<1;
			if('A'<=b[2]&&b[2]<='C'&&d[2]>='D'||'A'<=d[2]&&d[2]<='C'&&b[2]>='D'){
				cout<<0<<0;
			}else{
				cout<<1;
				if(b[2]==d[2]+1||d[2]==b[2]+1){
					cout<<1;
				}else{
					cout<<0;
				}
			}
		}
	}else{
		cout<<0<<0<<0<<0;
	}
	
} 
