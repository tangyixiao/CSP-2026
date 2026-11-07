#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","w",stdin);
	freopen("travel.out","r",stdout);
	int a,b;
	string m,n;
	cin>>a>>m>>b>>n;
	if(a==b){
		cout<<1;
		if(m[0]*10+m[1]==n[0]*10+n[1]){
			cout<<1;
			if((m[2]>='A'&&m[2]<='C'&&n[2]>='A'&&n[2]<='C')||(m[2]<='F'&&m[2]>='D'&&n[2]>='D'&&n[2]<='F')){
				cout<<1;
				if(m[2]-1==n[2]||m[2]+1==n[2]){
					cout<<1; 
				}
				else cout<<0;
				
			}
			else cout<<0<<0;
		}
		else cout<<0<<0<<0;
	}
	else{
		cout<<0<<0<<0<<0;
	}
	
	
	
	return 0;
} 