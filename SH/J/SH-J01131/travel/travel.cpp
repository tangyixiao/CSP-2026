#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	string m,n;
	cin>>a>>m>>b>>n;
	if(a==b){
		cout<<1;
		if(m[0]==n[0]&&m[1]==n[1]){
		cout<<1;
		if(m[2]=='A'||m[2]=='B'||m[2]=='C'){
		if(n[2]=='A'||n[2]=='B'||n[2]=='C'){
			cout<<1;
			if(m[2]+1==n[2]||n[2]+1==m[2]){
				cout<<1;
			}else{
				cout<<0;
			}
		}else{
			cout<<0<<0;
		}
		}else{
		if(n[2]=='D'||n[2]=='F'){
			cout<<1;
			if(m[2]+1==n[2]||n[2]+1==m[2]){
				cout<<1;
			}else{
				cout<<0;
			}
		}else{
			cout<<0<<0;
		}
	}
	}else{
		cout<<0<<0<<0;
	}
	}else{
		cout<<0<<0<<0<<0;
	}
	return 0;
}
