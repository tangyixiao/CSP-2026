#include<bits/stdc++.h>
using namespace std;
string a,b,n,m;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>n>>m;
	if(a==n){
		 cout<<1;
		 if(b[0]==m[0]&&b[1]==m[1]){
		 	cout<<1;
		 	if(b[2]=='D'&&m[2]=='F'||b[2]=='F'&&m[2]=='D') cout<<11;
			else{
				if(b[2]=='A'&&m[2]=='B'||b[2]=='B'&&m[2]=='A'||b[2]=='C'&&m[2]=='B'||b[2]=='B'&&m[2]=='C'){
					cout<<11;
				}else{
					if(b[2]=='A'&&m[2]=='C'||m[2]=='A'&&b[2]=='C') cout<<10;
					else cout<<0<<0;
				}
			}
		 }
		 else{
		 	cout<<0<<0<<0;
		 }
	}
	else{
		cout<<0<<0<<0<<0;
	}
	return 0;
} 