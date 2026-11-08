#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string n,m,n1,m1;cin>>n>>m>>n1>>m1;
	if(n==n1){
		cout<<1;
	}
	else cout<<0;
	cout<<(m[0]==m1[0]&&m[1]==m1[1]&&n==n1);
	if(m[0]==m1[0]&&m[1]==m1[1]&&n==n1){
		if(m[2]>='A' && m[2]<='C'){
			if(m1[2]>='A' && m1[2]<='C'){
				cout<<1;
			}
			else cout<<0;	
		}
		else if(m[2]>='D'&&m[2]<='F'){
			if(m1[2]>='D'&&m1[2]<='F'){
				cout<<1;
			}		
			else cout<<0;
		}
		else cout<<0;
	}
	else cout<<0;
	int s=m[2]-'A';
	int s1=m1[2]-'A';
	if(m[0]==m1[0]&&m[1]==m1[1]&&n==n1){
		if((s-1==s1)||(s+1==s1)){
			if(m[2]>='A' && m[2]<='C'){
				if(m1[2]>='A' && m1[2]<='C'){
					cout<<1;
				}
				else cout<<0;	
			}		
			else if(m[2]>='D'&&m[2]<='F'){
				if(m1[2]>='D'&&m1[2]<='F'){
					cout<<1;
				}		
				else cout<<0;
			}
			else cout<<0;
		}
		else cout<<0;
	}
	else cout<<0;
}
