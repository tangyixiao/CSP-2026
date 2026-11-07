#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<1;
		int z=1;
		for(int i=0;i<=1;i++){
			if(b[i]!=d[i]){
				z=0;
			}
		}
		if(z==1){
			cout<<1;
			if(b[2]>='D' && d[2]>='D'){
				cout<<11;
			}
			
			else if(b[2]<='C' && d[2]<='C'){
				cout<<1;
				if(b[2]=='B' || d[2]=='B'){
					cout<<1;
				}
				else{
					cout<<0;
				}
			}
			else{
				cout<<0;
				cout<<0;
			}
		}
		if(z==0){
			cout<<0;
			cout<<0;
			cout<<0;
		}
		
	}
	if(a!=c){
		cout<<0;
		cout<<0;
		cout<<0;
		cout<<0;
	}
	return 0;
}
