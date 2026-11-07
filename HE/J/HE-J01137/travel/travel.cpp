#include<bits/stdc++.h>
using namespace std;
string n,m;
const int N=3;
char n2[N],m2[N];
int main(){
	freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
	cin>>n>>n2>>m>>m2;
	if(n==m){
		cout<<1;
		if(n2[0]==m2[0] && n2[1]==m2[1]){
			cout<<1;
			if(n2[2]<='C' && m2[2]<='C'){
				cout<<1;
			}else if(n2[2]<='F' && n2[2]>'C' && m2[2]<='F' && m2[2]>'C'){
				cout<<1;
			}else{
				cout<<0;
			}
			if(m2[2]!=n2[2]+1 && n2[2]!=m2[2]+1 || n2[2]=='C'){
				cout<<0;
			}else{
				cout<<1;	
			}
		}else{
			cout<<0<<0;
			if(n2[0]==m2[0] && n2[1]==m2[1]){
				if(m2[2]!=n2[2]+1 && n2[2]!=m2[2]+1 || n2[2]=='C'){
					cout<<0;
				}else{
					cout<<1;	
				}
			}else{
				cout<<0;
			}
		}
	}
	else{
		cout<<0<<0<<0;
		if(n2[0]==m2[0] && n2[1]==m2[1]){
			if(m2[2]!=n2[2]+1 && n2[2]!=m2[2]+1 || n2[2]=='C'){
				cout<<0;
			}else{
				cout<<1;	
			}
		}else{
			cout<<0;
		}
	}

	return 0;
}
